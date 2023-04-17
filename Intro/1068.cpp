#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    while (1)
    {
        if (n == 1)
        {
            cout << 1;
            return 0;
        }
        cout << n << " ";
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
    }
}