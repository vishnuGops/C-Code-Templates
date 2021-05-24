//Given an integer n, break it into the sum of k positive integers, where k >= 2, and maximize the product of those integers.

// Return the maximum product you can get.

#include <iostream>
#include <algorithm>
#include <vector>
#include <valarray>
#include <climits>
#include <unordered_map>

using namespace std;

int integerBreak(int val)
{
    //base case
    if (val == 2)
        return 1;

    if (val == 3)
        return 2;

    int cnt3 = 0, cnt2 = 0, cnt1 = 0;
    while (val > 0)
    {
        if (val >= 3)
        {
            cnt3 += 1;
            val -= 3;
            continue;
        }
        if (val >= 2)
        {
            cnt2 += 1;
            val -= 2;
        }
        if (val >= 1)
        {
            cnt1 += 1;
            val -= 1;
        }
    }

    if (cnt1 == 0)
    {
        return ((pow(3, cnt3)) * (pow(2, cnt2)));
    }

    if (cnt1 > 0)
    {
        cnt3 -= 1;
        cnt2 += 2;
        return ((pow(3, cnt3)) * (pow(2, cnt2)));
    }
    return 0;
}

int main()
{

    int val = 4;
    int ans;
    ans = integerBreak(val);
    cout << "The max product is: " << ans;
}