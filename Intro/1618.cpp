#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int a=0;
    while (n>0)
    {
        n=n/5;
        a+=n;
    }
    
    cout << a;
}