#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

void solve()
{
    int x, y;
    cin >> x >> y;
    if (y % 2 == 1)
    {
        if (x % 2 == 1 || x == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    else if ((x + (y * 2)) % 2 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int32_t main()
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