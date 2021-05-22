//generate all subsets of the tree

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//vector<string> res;
void generateSubstring(string val, string temp, int i)
{
    //no deadends

    if (i == val.length())
    {
        cout << temp << endl;
        return;
    }
    else
    {
        generateSubstring(val, temp + val[i], i + 1);
        generateSubstring(val, temp, i + 1);
    }
}

int main()
{
    int count = 0;
    string val = "abc";
    string str = "";
    generateSubstring(val, str, 0);
    //return res;
}