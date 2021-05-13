#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//vector<string> res;
void generateBraces(int count, int n, string braces)
{

    if (count == 0 && n == 0)
    {
        //res.push_back(braces);
        cout << braces << endl;
        return;
    }

    if (count < 0 || count > n)
        return;

    else
    {
        generateBraces(count + 1, n - 1, braces + "(");
        generateBraces(count - 1, n - 1, braces + ")");
    }
}

int main()
{
    int no_of_braces = 8;
    int count = 0;
    int total = no_of_braces * 2;
    string braces = "";
    generateBraces(count, total, braces);
    //return res;
}