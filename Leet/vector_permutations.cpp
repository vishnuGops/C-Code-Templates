#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> v;
    sort(nums.begin(), nums.end());
    do
    {
        v.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));
    return v;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};

    vector<vector<int>> ans;

    ans = permute(nums);

    for (int i = 0; i < ans.size(); i++)
    {
        for (auto j = ans[i].begin(); j != ans[i].end(); ++j)
        {
            cout << *j << " ";
        }
        cout << endl;
    }
}