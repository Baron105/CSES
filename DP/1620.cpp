#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> k(n);
    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }
    long long l = 0, r = 1e18;
    while (l < r) {
        long long mid = (l + r) / 2;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += mid / k[i];
            if (sum >= t) {
                break;
            }
        }
        if (sum >= t) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    cout << l << endl;
    return 0;
}