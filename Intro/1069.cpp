#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    long long int c = 0, m = 0;
    cin >> s;
    for (string::size_type i = 0; i + 1 < s.size(); i++)
    {
        if (s[i] == s[i + 1])
        {
            c++;
            if (m <= c) m = c;
        }
        else c = 0;
    }
    cout << m + 1;
}
