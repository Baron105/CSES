#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for (int g = a[n-1]; g >= 1; g--) {
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] % g == 0) {
                cnt++;
            }
        }
        if (cnt >= 2) {
            ans = g;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
