#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    long long count = 0;

    if (n >= 100)
    {
        count += n / 100;
        n %= 100;
    }
    if (n >= 20)
    {
        count += n / 20;
        n %= 20;
    }
    if (n >= 10)
    {
        count += n / 10;
        n %= 10;
    }
    if (n >= 5)
    {
        count += n / 5;
        n %= 5;
    }
    if (n >= 1)
    {
        count += n / 1;
        n %= 1;
    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}