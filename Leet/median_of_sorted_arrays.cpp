// 4. Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

// The overall run time complexity should be O(log (m+n)).

#include <iostream>
#include <algorithm>
#include <vector>
#include <valarray>

using namespace std;

void findMedian(vector<int> nums1, vector<int> nums2)
{
    //edge cases
    if (nums1.size() == 0 && nums2.size() == 0)
    {
        cout << "Empty" << endl;
    }
    else if (nums1.size() == 0)
    {
        //find and return median of nums2
        int n = nums2.size();
        if (n == 1)
            cout << nums2[0];
        else if (n % 2 != 0)
        {
            cout << nums2[(n / 2)];
        }
        else
        {
            int upp = (n / 2);
            int dow = (n / 2) - 1;
            double med = (double)(nums2[upp] + nums2[dow]) / 2;
            cout << med;
        }
    }

    else if (nums2.size() == 0)
    {
        //find and return median of nums1
        int n = nums1.size();
        if (n == 1)
            cout << nums1[0];
        else if (n % 2 != 0)
        {
            cout << nums1[(n / 2)];
        }
        else
        {
            int upp = (n / 2);
            int dow = (n / 2) - 1;
            double med = (double)(nums1[upp] + nums1[dow]) / 2;
            cout << med;
        }
    }
    else
    {
        //both contain values so merge and find median
        int n1 = nums1.size();
        int n2 = nums2.size();
        int n = n1 + n2;
        vector<int> ans(n);

        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), ans.begin());
        if (n % 2 != 0)
        {
            cout << ans[(n / 2)];
        }
        else
        {
            int upp = (n / 2);
            int dow = (n / 2) - 1;
            double med = (double)(ans[upp] + ans[dow]) / 2;
            cout << med;
        }
    }
}

int main()
{
    vector<int> nums1 = {1, 1, 1, 1, 2, 3};
    vector<int> nums2 = {2, 3, 4, 4};
    findMedian(nums1, nums2);
}