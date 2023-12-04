#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define endl "\n"

using namespace std;

const int N = 1e5;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    vector<bool> dp(N + 1, false);
    dp[0] = true;

    for (int x : a)
    {
        for (int i = N - x; i >= 0; --i)
        {
            if (dp[i]) dp[i + x] = true;
        }
    }

    int ans = 0;

    for (int i = 1; i <= N; ++i)
    {
        if (dp[i]) ++ans;
    }

    cout << ans << endl;

    for (int i = 1; i <= N; ++i)
    {
        if (dp[i]) cout << i << " ";
    }
    cout << endl;
}