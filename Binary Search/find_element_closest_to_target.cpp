#include <iostream>
#include <algorithm>
#include <vector>
#include <valarray>

using namespace std;

int binarySearch(vector<int> arr, int target)
{

    int l = 0;
    int r = arr.size() - 1;

    while (l + 1 < r)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] > target)
            r = mid;

        else
            l = mid;
    }
    //if element not found then find the one closest to it
    if (abs(target - arr[l]) <= abs(target - arr[r]))
        return l;
    else
        return r;
}

int main()
{
    vector<int> arr = {12, 3, 4, 56, 6, 76, 17};
    sort(arr.begin(), arr.end());

    int target = 6;

    cout << "The sorted array is:" << endl;
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "The target is : " << target << endl;

    int result = binarySearch(arr, target);
    cout << "The element closest to target is: " << arr[result] << " at index : " << result;
    return 0;
}