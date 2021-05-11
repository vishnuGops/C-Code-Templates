//using sliding window Time complexity : O(2n) = O(n)O(2n)=O(n).

#include <iostream>
#include <algorithm>
#include <vector>
#include <valarray>
#include <climits>
#include <unordered_map>

using namespace std;
//using sliding window
int longest_substring_sliding_window(string s)
{
    int left = 0;  //to eliminate duplicates
    int right = 0; //keep track of letters in string

    int count = 0;
    vector<int> chars(128);
    while (right < s.length())
    {
        char r = s[right];
        chars[r]++;

        while (chars[r] > 1)
        {
            char l = s[left];
            chars[l]--;
            left++;
        }
        count = max(count, right - left + 1);
        right++;
    }
    return count;
}

//brute force sliding window Time complexity : O(n^3)

bool no_duplicate(string s, int start, int end)
{
    vector<int> chars(128);
    for (int i = start; i <= end; i++)
    {
        char c = s[i];
        chars[c]++;
        if (chars[c] > 1)
        {
            return false;
        }
    }
    return true;
}
int longest_substring_brute_force(string s)
{
    int count = 0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (no_duplicate(s, i, j))
            {
                count = max(count, j - i + 1);
            }
        }
    }
    return count;
}

//using hashmap / optimized sliding window

int longest_substring_map(string s)
{
    int count = 0;
    int left = 0;
    int right = 0;

    vector<int> chars(128, -1);

    while (right < s.length())
    {
        char r = s[right];
        int index = chars[r];

        if (index != -1 && left <= index && index < right)
        {
            left = index + 1;
        }
        count = max(count, right - left + 1);

        chars[r] = right;
        right++;
    }
    return count;
}

int main()
{
    string str = "tmmzuxt";
    cout << "Sliding window:" << endl;
    cout << "Longest substring size = " << longest_substring_sliding_window(str) << endl;
    cout << "Longest substring size = " << longest_substring_sliding_window("pwwkew") << endl;
    cout << "Brute Force:" << endl;
    cout << "Longest substring size = " << longest_substring_brute_force(str) << endl;
    cout << "Longest substring size = " << longest_substring_brute_force("pwwkew") << endl;
    cout << "Hash Map:" << endl;
    cout << "Longest substring size = " << longest_substring_map(str) << endl;
    cout << "Longest substring size = " << longest_substring_map("pwwkew") << endl;
}