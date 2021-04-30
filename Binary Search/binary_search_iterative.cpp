#include <iostream>
#include <algorithm>
#include <vector>
#include <valarray>

using namespace std;

int binarySearch(vector<int> arr, int find)
{
    int l = 0;
    int r = arr.size() - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == find)
            return mid;

        if (arr[mid] < find)
            l = mid + 1;

        else
            r = mid - 1;
    }

    return -1;
}

int main()
{
    vector<int> arr = {12, 3, 4, 56, 6, 76, 17};
    sort(arr.begin(), arr.end());
    int find = 17;

    cout << "The sorted array is:" << endl;
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "The element to search for: " << find << endl;

    int result = binarySearch(arr, find);

    (result == -1) ? cout << "The element could not be found"
                   : cout << "The element found at index: " << result;
    return 0;
}
