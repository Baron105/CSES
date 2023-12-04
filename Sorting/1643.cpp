#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#define ll long long
#define endl "\n"

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    ll sum = INT_MIN, ans = INT_MIN;
    for (int i = 0; i < n; i++) cin >> a[i];

    for (ll x : a)
    {
        // kadane's algorithm
        sum = max(x, sum + x);
        ans = max(ans, sum);
    }
    cout << ans << endl;
}