#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    const int mod = 1e9 + 7;
    vector<vector<char>> grid(n, vector<char>(n));
    vector<vector<long int>> dp(n, vector<long int>(n));
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            grid[i][j] = s[j];
        }
    }
    dp[0][0] = 1;
    for (int i = 0; i < n; i++)
    {
        if (grid[0][i] == '.')
        {
            dp[0][i] = 1;
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (grid[i][0] == '.')
        {
            dp[i][0] = 1;
        }
        else
        {
            break;
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n;j++)
        {
            if (grid[i][j] == '.')
            {
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
            }
        }
    }
    if (grid[0][0] == '*') cout << 0 << endl;
    else cout << dp[n - 1][n - 1] % mod << endl;
    return 0;
}