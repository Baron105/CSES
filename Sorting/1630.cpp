#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long
#define endl "\n"

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;

    // sort so that durations are in ascending order
    sort(a.begin(), a.end());

    ll ans = 0, sum = 0;

    for (auto x : a)
    {
        // reward = deadline - sum of durations until now
        sum += x.first;
        ans += x.second - sum;
    }

    cout << ans << endl;
}