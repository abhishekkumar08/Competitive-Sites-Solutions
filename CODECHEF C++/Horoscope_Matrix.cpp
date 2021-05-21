#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m, 0));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> arr[i][j];
        }
    }
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            count += (arr[i][j] != arr[i - 1][j - 1]);
        }
    }
    int q;
    cin >> q;
    int x, y, v;
    while (q--)
    {
        cin >> x >> y >> v;
        --x;
        --y;
        int old = arr[x][y];
        arr[x][y] = v;
        if (x - 1 >= 0 && y - 1 >= 0)
        {
            if (arr[x - 1][y - 1] == arr[x][y] && (arr[x][y] != old))
                count--;
        }
        if (x + 1 < n && y + 1 < m)
        {
            if (arr[x + 1][y + 1] == arr[x][y] && (arr[x][y] != old))
                count--;
        }
        if (x - 1 >= 0 && y - 1 >= 0)
        {
            if (arr[x - 1][y - 1] != arr[x][y] && (arr[x - 1][y - 1] == old))
                count++;
        }
        if (x + 1 < n && y + 1 < m)
        {
            if (arr[x + 1][y + 1] != arr[x][y] && (arr[x + 1][y + 1] == old))
                count++;
        }
        cout << (count ? "No\n" : "Yes\n");
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}