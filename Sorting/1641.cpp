#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        int a = v[i].first;
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int b = v[j].first;
            int c = v[k].first;
            if (a + b + c == x)
            {
                cout << v[i].second << " " << v[j].second << " " << v[k].second << endl;
                return 0;
            }
            else if (a + b + c < x)
                j++;
            else
                k--;
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}