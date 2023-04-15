#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<long int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<long int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int count = 0;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        while (j < m && b[j] < a[i] - k)
        {
            j++;
        }
        if (j < m && b[j] <= a[i] + k)
        {
            count++;
            j++;
        }
    }
    cout << count << endl;
}