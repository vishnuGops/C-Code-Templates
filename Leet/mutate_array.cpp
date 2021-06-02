#include <iostream>
#include <vector>

using namespace std;
vector<int> b;
void mutate(vector<int> arr, int n)
{
    if (n == 1)
        b.push_back(arr[0]);

    for (int i = 0; i < n; i++)
    {
        if (i - 1 == -1)
            b.push_back(arr[i] + arr[i + 1]);
        else if (i + 1 == n)
            b.push_back(arr[i - 1] + arr[i]);

        else
            b.push_back(arr[i - 1] + arr[i] + arr[i + 1]);
    }
}

int main()
{
    vector<int> arr = {4, 0, 1, -2, 3};
    int n = arr.size();

    mutate(arr, n);
    for (int i : b)
    {
        cout << i << " ";
    }
}