#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n;
    long int x;
    cin >> n >> x;
    vector<long int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    int count = 0;
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if (p[i] + p[j] <= x)
        {
            i++;
        }
        j--;
        count++;
    }
    cout << count << endl;
}