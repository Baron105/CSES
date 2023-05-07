
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];
    // sparse table for range minimum query
    vector<vector<int>> st(n, vector<int>(20));
    for (int i = 0; i < n; i++)
        st[i][0] = x[i];
    for (int j = 1; j < 20; j++)
        for (int i = 0; i + (1 << j) <= n; i++)
            st[i][j] = min(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;
        int k = 31 - __builtin_clz(b - a + 1);
        // built-in function to find the position of the most significant bit
        cout << min(st[a][k], st[b - (1 << k) + 1][k]) << "\n";
    }
}