//given an array of ints nums sorted in ascending order find the starting
//position of the given target

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

        if (arr[mid] == target) //then search left since we need left most target
            r = mid;
        else if (arr[mid] < target)
            l = mid;

        else
            r = mid;
    }

    if (arr[l] == target)
        return l;
    if (arr[r] == target)
        return r;
    else
        return -1;
}

int main()
{
    vector<int> arr = {2, 2, 2, 2, 3, 1, 4, 2, 2, 4, 2, 1};
    vector<int> arr1 = {0, 0, 1, 1, 1, 1, 1};
    sort(arr.begin(), arr.end());

    int target = 1;

    cout << "The sorted array is:" << endl;
    for (auto i : arr1)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "The target is : " << target << endl;

    int result = binarySearch(arr1, target);
    cout << "The first position of target element is at index : " << result;
    return 0;
}