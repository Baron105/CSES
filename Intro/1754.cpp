#include <iostream>

using namespace std;

int main()
{
    long long int n,i,d,l;
    cin >> n;
    long long int a,b;
    for (i = 0; i < n; i++)
    {
        cin >> a >> b;
        l=(a+b)/3;
        if ((a+b)%3!=0) {
            cout << "NO\n";
            continue;
        }
        else if (a>b) d=a-b;
        else d=b-a;
        if (l>=d) cout << "YES\n";
        else cout << "NO\n";
    }
}