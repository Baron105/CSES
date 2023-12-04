#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int n, k, l, ans;
    map<int, int> mp;

    cin >> n;

    l = 1;
    ans = 0;

    for (int r = 1; r <= n; r++) {
        cin >> k;

        if (mp[k]) {
            ans = max(ans, r - l);
            l = max(l, mp[k] + 1);
            mp[k] = r;
        } else {
            ans = max(ans, r - l + 1);
            mp[k] = r;
        }
    }

    ans = max(n - l + 1, ans);
    cout << ans << endl;

    return 0;
}
