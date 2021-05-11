// Example:
// [[0,0,0,1]
// [0,0,1,1]
// [0,0,0,1]
// [0,1,1,1]]

// output: 1

// output is to return the coloumn index of the leftmost 1

#include <iostream>
#include <algorithm>
#include <vector>
#include <valarray>
#include <climits>
#include <unordered_map>

using namespace std;

int binarySearch(vector<int> row, int left, int right, int target)
{
    // int left = 0;
    // int right = row.size();
    while (left + 1 < right)
    {
        int mid = left + (right - left) / 2;

        if (row[mid] == target)
            right = mid;

        else if (row[mid] < target)
            left = mid;
        else
            right = mid;
    }

    if (row[left] == target)
        return left;
    if (row[right] == target)
        return right;
    else
        return -1;
}

int leftmost_one(vector<vector<int>> mat)
{
    int index;
    int leftmost = INT_MAX;
    int right = mat[0].size();
    for (int i = 0; i < mat.size(); i++)
    {
        index = binarySearch(mat[i], 0, right, 1);
        if (index != -1)
        {
            leftmost = min(leftmost, index);
            right = leftmost;
        }
    }
    return leftmost;
}

int main()
{

    vector<vector<int>> mat = {{0, 0, 1, 1}, {0, 0, 1, 1}, {0, 0, 1, 1}, {0, 0, 0, 1}};

    cout << "Leftmost index of 1: " << leftmost_one(mat);
}