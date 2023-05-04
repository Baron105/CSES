#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<long long int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    vector<long long int> sum(n + 1);
    sum[0] = 0;
    for (int i = 1; i <= n; ++i) sum[i] = sum[i - 1] + v[i - 1];
    for (int i = 0; i < q; ++i) {
        int a, b;
        cin >> a >> b;
        cout << sum[b] - sum[a - 1] << endl;
    }
    return 0;
}