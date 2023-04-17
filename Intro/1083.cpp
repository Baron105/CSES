#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long int n,i;
    cin >> n;
    vector <long long int> a(n-1);
    long long s=0;
    for (i=0;i<n-1;i++)
    {
        cin >> a[i];
        s=s+a[i];
    }
    cout << n*(n+1)/2-s;
}