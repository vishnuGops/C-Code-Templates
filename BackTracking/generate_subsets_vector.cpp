//generate all subsets of the tree

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> res;
void generateSubset(vector<int> nums, vector<int> pair, int count)
{
    if (count == nums.size())
    {
        res.push_back(pair);
    }

    else
    {
        pair.push_back(nums[count]);
        generateSubset(nums, pair, count + 1);
        pair.pop_back();
        generateSubset(nums, pair, count + 1);
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> pair = {};
    generateSubset(nums, pair, 0);

    //output answer
    for (int i = 0; i < res.size(); ++i)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}