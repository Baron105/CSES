#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    const int x = 1e6;
    int N, a;
    vector<int> d(x + 1, 0);

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> a;
        d[a]++;
    }

    int ans = 0;

    for (int i = x; i >= 1; i--)
    {
        int cnt = 0;
        for (int j = i; j <= x; j += i)
            cnt += d[j];

        if (cnt >= 2)
        {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
