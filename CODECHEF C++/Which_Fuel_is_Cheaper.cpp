#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

void solve()
{
    int x, y, a, b, k;
    cin >> x >> y >> a >> b >> k;
    if ((x + (a * k)) < (y + (b * k)))
        cout << "PETROL\n";
    else if ((x + (a * k)) > (y + (b * k)))
        cout << "DIESEL\n";
    else if ((x + (a * k)) == (y + (b * k)))
        cout << "SAME PRICE\n";
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