#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
const long long INF = LLONG_MAX;

int main() {
    int N;
    cin >> N;

    vector<int> p(N);
    for (int i = 0; i < N; i++)
        cin >> p[i];

    long long x = INF;
    for (int i = 0; i < (1 << N); i++) {
        long long a = 0, b = 0;
        for (int j = 0; j < N; j++) {
            if (i & (1 << j))
                a += p[j];
            else
                b += p[j];
        }
        x = min(x, abs(a - b));
    }
    cout << x << endl;
    return 0;
}
