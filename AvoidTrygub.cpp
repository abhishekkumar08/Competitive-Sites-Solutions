#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a;
    cin >> a;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    cout << s << endl;
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