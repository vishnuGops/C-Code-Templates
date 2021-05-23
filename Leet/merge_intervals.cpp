#include <iostream>
#include <algorithm>
#include <vector>
#include <valarray>
#include <climits>
#include <unordered_map>

using namespace std;

void mergeIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());

    //create a new list to hold the merged pairs
    vector<vector<int>> merge;

    for (auto interval : intervals)
    {

        //check if either merge list is empty or if its not gonna merge with next pair
        if (merge.empty() || merge.back()[1] < interval[0])
        {
            merge.push_back(interval);
        }
        else
        {
            //compare the 2 adjacent pairs to merge them
            merge.back()[1] = max(merge.back()[1], interval[1]);
        }
    }

    //print the intervals
    for (int i = 0; i < merge.size(); i++)
    {
        for (int j = 0; j < merge[i].size(); j++)
        {
            cout << merge[i][j] << ",";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};

    mergeIntervals(intervals);
}