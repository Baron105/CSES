#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> a(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == '.')
            {
                ans++;
                a[i][j] = '#';
                vector<pair<int, int>> q;
                q.push_back({i, j});
                while (!q.empty())
                {
                    int x = q.back().first;
                    int y = q.back().second;
                    q.pop_back();
                    if (x + 1 < n && a[x + 1][y] == '.')
                    {
                        q.push_back({x + 1, y});
                        a[x + 1][y] = '#';
                    }
                    if (x - 1 >= 0 && a[x - 1][y] == '.')
                    {
                        q.push_back({x - 1, y});
                        a[x - 1][y] = '#';
                    }
                    if (y + 1 < m && a[x][y + 1] == '.')
                    {
                        q.push_back({x, y + 1});
                        a[x][y + 1] = '#';
                    }
                    if (y - 1 >= 0 && a[x][y - 1] == '.')
                    {
                        q.push_back({x, y - 1});
                        a[x][y - 1] = '#';
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}