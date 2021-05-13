#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//using binary search
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    //use counter to iterate each row from the back
    int row;
    // to find the row where the element exists
    int n = matrix.size();
    if (n == 0)
        return false;
    for (int i = n - 1; i >= 0; --i)
    {
        if (target < matrix[i][0])
            continue;
        else
            row = i;
        break;
    }
    //find row size
    if (matrix[row].size() == 1)
    {
        if (matrix[row][0] == target)
            return true;
        else
            return false;
    }

    // for (int i = 0; i < matrix[row].size(); i++)
    // {
    //     cout << matrix[row][i] << " ";
    // }

    //row found, apply binary search on the row

    int l = 0;
    int r = matrix[row].size() - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (matrix[row][mid] == target)
            return true;

        else if (matrix[row][mid] < target)
            l = mid + 1;

        else
            r = mid - 1;
    }

    return false;
}
//using last element of the first row and moving inwards or up
bool searchMatrix2(vector<vector<int>> &matrix, int target)
{

    int i = 0;
    int j = matrix[0].size() - 1;

    while (i < matrix.size() && j >= 0)
    {

        if (matrix[i][j] == target)
            return true;

        else if (matrix[i][j] > target)
            j--;
        else
            i++;
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    vector<vector<int>> matrix1 = {{1}};
    int target = 0;

    if (searchMatrix2(matrix1, target))
    {
        cout << "element found";
    }
    else
        cout << "element not found";
}