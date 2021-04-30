#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr, int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        if (arr[mid] < x)
            return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main()
{
    // int arr[] = {2, 3, 4, 5, 6, 7, 10, 12, 43};
    vector<int> arr = {2, 3, 4, 5, 6, 7, 10, 12, 43};
    int find = 12;

    int n = arr.size();
    int result = binarySearch(arr, 0, n - 1, find);

    (result == -1) ? cout << "Element not present"
                   : cout << "Element is found at index: " << result;
}