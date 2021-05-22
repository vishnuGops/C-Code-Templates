//generate all subsets of the tree

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void generatePerm(vector<int> temp, vector<int> val)
{
    //no deadends
    //full solution is same size as the array
    if (temp.size() == val.size())
    {
        for (int i = 0; i < val.size(); i++)
        {
            cout << val[i] << " ";
        }
        cout << endl;
        return;
    }
    else
    {
        for (int j = 0; j < val.size(); j++)
        {
            for (int k = 0; k < temp.size(); k++)
            {
                if (val[j] !=)
            }
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<int> temp = {};
    generatePerm(temp, arr);

    //return res;
}