//Find the max subarray size with consequtive 1's

#include <iostream>
#include <algorithm>
#include <vector>
#include <valarray>
#include <climits>

using namespace std;

int restart_sliding_window(vector<int> arr)
{
    int maxsize = INT_MIN;

    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == 1)
            {
                count += 1;
            }
            else
            {
                maxsize = max(count, maxsize);
                break;
            }
        }
    }
    return maxsize;
}

int main()
{
    vector<int> arr = {0, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 0, 1, 1};

    int max_ones = restart_sliding_window(arr);

    cout << "Max number of consequtive 1s in array is: " << max_ones;
}