#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n, m, a, b, ans = 0;
    cin >> n >> m >> a >> b;
    if (m * a <= b)
        return n * a;
    else
    {
        return (n / m) * b + min((n % m) * a, b);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << solve();
}