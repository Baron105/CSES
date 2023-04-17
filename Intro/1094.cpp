#include <iostream>
#include <vector>

using namespace std;
int main()
{
    long long int c,n,i,s=0;
    cin >> n;
    vector <long long int> x(n);
    for (i=0;i<n;i++)
    {
        cin >> x[i];
        if (i==0) continue;
        c=x[i-1]-x[i];
        if (c>0) {
                s=s+c;
                x[i]=x[i-1];
        }
    }
    cout << s;
}