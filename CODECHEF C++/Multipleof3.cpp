#include <bits/stdc++.h>
using namespace std;

void solve()
{
    unsigned long long k, d, dl, sum = 0;
    cin >> k >> d >> dl;
    k -= 2;
    sum += d + dl;
    while (k--)
    {
        sum += (d + dl) % 10;
        sum %= 3;
    }
    if (sum % 3 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
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