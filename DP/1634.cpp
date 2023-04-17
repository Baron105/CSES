#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    const long long int max = 1e9;
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<long long int> dp(x + 1, max);
    dp[0] = 0;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - a[j] >= 0)
            {
                dp[i] = min(dp[i], dp[i - a[j]] + 1);
            }
        }
    }
    if (dp[x] == max)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << dp[x] << endl;
    }
    return 0;
}