#include <iostream>
#include <algorithm>
#include <set>
// multiset works like a set, but it can have multiple elements with the same value and is always sorted unlike vector.
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    multiset<int> s;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        s.insert(a);
    }
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        auto it = s.upper_bound(a);
        if (it == s.begin()) {
            cout << -1 << endl;
        } else {
            it--;
            cout << *it << endl;
            s.erase(it);
        }
    }
    return 0;
}
