
#include <iostream>
#include <algorithm>
#include <vector>
#include <valarray>
#include <climits>
#include <unordered_map>

using namespace std;

int min_distance_sum(vector<int> houses)
{
    sort(houses.begin(), houses.end());
    int tower = 0;
    int sum;
    int n = houses.size();
    int min_sum = INT_MAX;
    for (int tower = 0; tower < houses[n - 1]; tower++)
    {
        for (int i = 0; i < n; i++)
        {

            sum += abs(tower - houses[i]);
        }
        min_sum = min(min_sum, sum);
        sum = 0;
    }
    return min_sum;
}

int main()
{
    vector<int> houses = {0, 12, 7, 14};
    int dist = min_distance_sum(houses);
    cout << dist;
}