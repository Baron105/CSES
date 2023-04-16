#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
 
long long binpow(long long a, long long b) {
    const int m = 1e9 + 7;
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return ((res * res)%m * a)%m;
    else
        return (res * res)%m;
}
 
int main()
{
    long long int a,b;
    int n;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        cin >> a >> b;
        cout << binpow(a,b) << "\n";
    }
}