#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n < 0)
    {
        n *= -1;
        if (n % 10 > (n % 100) / 10)
        {
            n -= n % 10;
            n /= 10;
        }
        else
        {
            n -= ((n % 100) / 10) * 10;
            n += (n % 10) * 10;
            n /= 10;
        }

        cout << n * (-1);
    }
    else
        cout << n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}