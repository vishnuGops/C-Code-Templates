#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//vector<string> res;
void generateBraces(int count, int n, string braces)
{
    //to check for complete tree and print the output
    if (count == 0 && n == 0)
    {
        cout << braces << endl;
        return;
    }

    //check for dead ends
    if (count < 0 || count > n)
    {
        return;
    }

    else
    {
        generateBraces(count + 1, n - 1, braces + '(');
        generateBraces(count - 1, n - 1, braces + ')');
    }
}

int main()
{
    int no_of_braces = 4;
    int count = 0;
    int total = no_of_braces * 2;
    string braces = "";
    generateBraces(count, total, braces);
    //return res;
}