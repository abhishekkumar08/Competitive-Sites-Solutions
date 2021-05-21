#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    int mina = INT_MAX, fun = 0;
    while (n--)
    {
        long long f, t;
        cin >> f >> t;
        if (mina > abs(k - t) && (k - t >= 0)&& fun<f)
        {
            mina = abs(k - t);
            fun = f;
        }
    }
    if (mina == INT_MAX)
        cout << -1;
    else
        cout << fun;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}