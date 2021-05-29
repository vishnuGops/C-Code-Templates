#include <iostream>
#include <algorithm>
#include <vector>
#include <valarray>

using namespace std;

int main()
{
    vector<int> nums1 = {2, 3};
    vector<int> nums2 = {1, 2, 3, 4};
    int n1 = nums1.size();
    int n2 = nums2.size();
    vector<int> ans(n1 + n2);
    merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), ans.begin());

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}