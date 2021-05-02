// Given an array of 0s and 1s, find subarray of lenght k with the max number of 1s

#include <iostream>
#include <algorithm>
#include <vector>
#include <valarray>
#include <climits>

using namespace std;
int fixed_sliding_window(vector<int> arr, int k)
{

    int count = INT_MIN;
    int n = arr.size();
    for (int i = 0; i < n - k + 1; i++)
    {
        int c = 0;
        for (int j = 0; j < k; j++)
        {
            if (arr[i + j] == 1)
            {
                c += 1;
            }
            count = max(count, c);
        }
    }
    return count;
}

int main()
{
    vector<int> arr = {0, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 0, 1, 1};
    int window = 4;

    int max_ones = fixed_sliding_window(arr, window);

    cout << "Max number of 1s in subarray of size " << window << " is: " << max_ones;
}