//generate all subsets of the tree

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
//vector<vector<int>> ans;
unordered_map<int, int> mapper;
void generatePerm(vector<int> arr, vector<int> temp)
{

    //complete case
    if (temp.size() == arr.size())
    {
        for (int n : temp)
            cout << n << " ";
        cout << endl;
        return;
    }

    for (auto pos = mapper.begin(); pos != mapper.end(); pos++)
    {
        int num = pos->first;
        int count = pos->second;
        if (count <= 0)
            continue;

        //pre processing
        temp.push_back(num);
        mapper[num]--;

        generatePerm(arr, temp);

        temp.pop_back();
        mapper[num]++;
    }
}

int main()
{
    vector<int> arr = {1, 2, 2, 3};
    for (int num : arr)
    {
        mapper[num]++;
    }
    vector<int> temp;
    generatePerm(arr, temp);

    //return res;
}