#include <iostream>
#include <algorithm>
#include <vector>
#include <valarray>
#include <climits>
#include <unordered_map>

using namespace std;

vector<vector<string>> groupAnagram(vector<string> &strs)
{
    int n = strs.size();

    vector<vector<string>> sol;
    unordered_map<string, int> str;

    for (int i = 0; i < n; i++)
    {
        string temp = strs[i];
        sort(temp.begin(), temp.end());

        if (str.count(temp) == 0) //new anagram
        {
            str[temp] = sol.size();
            sol.push_back({strs[i]});
        }
        else //not new
        {
            int index = str[temp];
            sol[index].push_back(strs[i]);
        }
    }
    return sol;
}

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> sol;
    sol = groupAnagram(strs);

    for (int i = 0; i < sol.size(); i++)
    {
        for (int j = 0; j < sol[i].size(); j++)
        {
            cout << sol[i][j] << " ";
        }
        cout << endl;
    }
}