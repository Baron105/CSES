#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    const long long int m = 1e9 + 7;
    int n, x;
    cin >> n >> x;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    vector<int> dp(x + 1);
    dp[0] = 1;

    for (int j = 0; j < n; j++)
    {
        for (int i = 1; i <= x; i++)
        {
            if (i - c[j] >= 0)
            {
                dp[i] += dp[i - c[j]];
                dp[i] %= m;
            }
        }
    }
    // key point: the order of the loops so that we don't count the same combination twice
    cout << dp[x] << endl;
}