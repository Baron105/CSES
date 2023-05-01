#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, 1e9);
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int x = i;
        while (x)
        {
            dp[i] = min(dp[i], dp[i - x % 10] + 1);
            x /= 10;
        }
    }
    cout << dp[n];
}