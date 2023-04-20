#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void hanoi(int n, int a, int b, int c, vector<pair<int, int>> &moves) {
    if (n == 1) {
        moves.push_back({a, c});
        return;
    }
    hanoi(n - 1, a, c, b, moves);
    moves.push_back({a, c});
    hanoi(n - 1, b, a, c, moves);
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> moves;
    hanoi(n, 1, 2, 3, moves);
    cout << moves.size() << endl;
    for (auto move : moves) {
        cout << move.first << " " << move.second << endl;
    }
    return 0;
}