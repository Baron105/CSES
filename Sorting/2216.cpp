#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    const int a = 2e5+1;
    int n, x, c, p[a];
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x;
        p[x] = i;
    }

    c = 1;
    for(int i = 2; i <= n; i++)
        if(p[i-1] > p[i])
            c++;
    cout << c;
}