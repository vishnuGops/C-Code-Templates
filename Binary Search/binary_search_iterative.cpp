#include <iostream>
#include <algorithm>
#include <vector>
#include <valarray>

using namespace std;

int binarySearch(vector<int> arr, int l, int r, int find)
{

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
    vector<int> arr = {12, 3, 4, 56, 6, 76, 7, 21, 2, 113, 4, 6, 22, 47, 2, 26, 5, 7, 23};
    sort(arr.begin(), arr.end());
    int find = 7;
    int n = arr.size();

    cout << "The sorted array is:" << endl;
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "The element to search for: " << find << endl;

    int result = binarySearch(arr, 0, n - 1, find);

    (result == -1) ? cout << "The element could not be found"
                   : cout << "The element found at index: " << result;
    return 0;
}
