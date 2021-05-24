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

    int cnt3 = val / 3, cnt2 = 0;

    if (val % 3 == 1)
    {
        cnt3 -= 1;
        cnt2 += 2;
    }
    else if (val % 3 == 2)
    {
        cnt2 += 1;
    }

    return (pow(3, cnt3) * (pow(2, cnt2)));
}

int main()
{

    int val = 4;
    int ans;
    ans = integerBreak(val);
    cout << "The max product is: " << ans;
}