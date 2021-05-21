#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    if (k <= ((n / 2) + n % 2))
    {
        cout << 1 + (k - 1) * 2;
    }
    else
    {
        cout << 2 + (k - 1 - (n / 2 + (n % 2))) * 2;
        // 1 3 5 7 2 4 6
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}