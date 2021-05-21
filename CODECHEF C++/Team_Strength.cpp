#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long x, y;
    cin >> x >> y;
    long long sum = 0;
    for (int i = 1; i <= x; ++i)
    {
        if (i % y == 0)
            sum += i % 10;
    }
    cout << sum << endl;
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