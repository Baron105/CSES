#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back({a, i});
    }
    sort(v.begin(), v.end());
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (v[i].first + v[j].first == x)
        {
            cout << v[i].second + 1 << " " << v[j].second + 1 << endl;
            return 0;
        }
        else if (v[i].first + v[j].first < x) i++;
        else j--;
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}