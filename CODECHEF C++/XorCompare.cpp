#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long x, y, n, z;
    cin >> x >> y >> n;
    for (long long i = 0; i < INT_MAX; i++)
    {
        if ((i ^ n) && ((x ^ i) < (y ^ i)))
        {
            cout << i << endl;
            break;
        }
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