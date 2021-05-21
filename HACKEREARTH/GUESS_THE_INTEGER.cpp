#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    long long limitUp = INT_MAX, limitDown = 0;
    while (n--)
    {
        string s;
        cin >> s;
        long long x;
        cin >> x;
        if (s == "L")
            limitUp = min(limitUp, x);
        else if (s == "R")
            limitDown = max(limitDown, x);
    }
    if (limitUp - limitDown == 1 || limitUp < limitDown)
        cout << "-1\n";
    else
        cout << limitUp - limitDown - 1 << endl;
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