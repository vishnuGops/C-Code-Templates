#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

vector<int> findErrorNums(vector<int> &nums)
{
    //using map

    map<int, int> num;
    vector<int> arr;

    for (int i = 1; i <= nums.size(); i++)
    {
        num[i] = 0;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        num[nums[i]]++;
    }

    for (auto dup : num)
    {
        //find duplicate
        if (dup.second == 2)
            arr.push_back(dup.first);
    }

    for (auto miss : num)
    {
        if (miss.second == 0)
            arr.push_back(miss.first);
    }
    return arr;
}

int main()
{
    vector<int> num = {3, 2, 3, 4, 6, 5};
    vector<int> res;
    res = findErrorNums(num);

    for (int i = 0; i < 2; i++)
    {
        cout << res[i] << " ";
    }
}