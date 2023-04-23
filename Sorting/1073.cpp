#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cubes(n);
    for (int i = 0; i < n; i++) {
        cin >> cubes[i];
    }

    multiset<int> towers;
    for (int i = 0; i < n; i++) {
        auto it = towers.upper_bound(cubes[i]);
        if (it == towers.end()) {
            towers.insert(cubes[i]);
        } else {
            towers.erase(it);
            towers.insert(cubes[i]);
        }
    }

    cout << towers.size();
}