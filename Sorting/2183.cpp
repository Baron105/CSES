#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    long int ans = 0;
    for (int i = 0; i < n; i++) {
        if (p[i] > ans + 1) {
            break;
        }
        ans += p[i];
    }
    cout << ans + 1 << endl;
}