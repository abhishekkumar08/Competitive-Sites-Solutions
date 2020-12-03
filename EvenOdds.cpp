#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k, sum = 0;
    cin >> n >> k;
    if (k > n / 2)
    {
        sum = 2;
        for (int i = 0; i < k - 2 - n / 2; i++)
            sum += 2;
    }
    else
    {
        sum = 1;
        for (int i = 0; i < k - 1; i++)
            sum += 2;
    }
    cout << sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}