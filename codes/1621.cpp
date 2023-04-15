#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] != v[i - 1])
        {
            count++;
        }
    }
    cout << count << endl;
}