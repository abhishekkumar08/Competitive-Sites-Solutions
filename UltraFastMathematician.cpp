#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s, a, ans = "";
    cin >> s >> a;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == a[i])
            ans += '0';
        else
            ans += '1';
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}