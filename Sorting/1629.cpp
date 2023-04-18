// greedy!
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back({b, a});
    }
    sort(v.begin(), v.end());
    int ans = 0;
    int c = 0;
    for (auto p : v) {
        if (c <= p.second) {
            c = p.first;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}