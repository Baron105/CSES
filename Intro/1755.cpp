#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<int> v(26);
    for (int i = 0; i < n; i++) {
        v[s[i] - 'A']++;
    }
    int odd = 0;
    for (int i = 0; i < 26; i++) {
        if (v[i] % 2 == 1) {
            odd++;
        }
    }
    if (odd > 1) {
        cout << "NO SOLUTION" << endl;
    } else {
        string t;
        for (int i = 0; i < 26; i++) {
            if (v[i] % 2 == 0) {
                for (int j = 0; j < v[i] / 2; j++) {
                    t += (char)('A' + i);
                }
            }
        }
        cout << t;
        for (int i = 0; i < 26; i++) {
            if (v[i] % 2 == 1) {
                for (int j = 0; j < v[i]; j++) {
                    cout << (char)('A' + i);
                }
            }
        }
        reverse(t.begin(), t.end());
        cout << t << endl;
    }
    return 0;
}