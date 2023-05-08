#include <iostream>
const int x = 1000000007;
using namespace std;
int main()
{
    long long int n,i;
    cin >> n;
    long long int a=1;
    for (i = 0; i < n; i++)
    {
        a=(2*(a%x))%x;
    }
    cout << a;
}