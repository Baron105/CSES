#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (long long int i = 1; i <= n; i++) {
        cout << ((i*i)*(i*i-1))/2-4*(i-1)*(i-2) << "\n";
        // form 2x3 and 3x2 blocks and deduct from total
    }
}