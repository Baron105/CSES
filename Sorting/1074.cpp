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
    long int median = p[n/2];
    long int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += abs(p[i] - median);
    }
    cout << ans << endl;
}