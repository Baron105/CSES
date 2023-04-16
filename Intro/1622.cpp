#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    vector<string> v;
    do
    {
        v.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    cout << v.size() << endl;
    for (auto i : v)
    {
        cout << i << endl;
    }
    return 0;
}