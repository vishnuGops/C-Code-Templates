//generate all subsets of the tree

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//vector<vector<int>> ans;
void generatePerm(vector<int> arr, int n, int c)
{
    //no deadends
    //full solution is same size as the array
    if (n == c)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            for (int x = 0; x < n; x++)
            {
                cout << arr[x] << " ";
            }
            cout << endl;
            return;
        }
    }
    for (int i = c; i < n; i++)
    {
        swap(arr[i], arr[c]);
        generatePerm(arr, n, c + 1);
        swap(arr[i], arr[c]);
    }
}

int main()
{
    vector<int> arr = {1, 2, 3};
    int n = arr.size();
    generatePerm(arr, n, 0);

    //return res;
}