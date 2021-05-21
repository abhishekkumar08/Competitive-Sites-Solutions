#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int count1 = 0, count0 = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == '1')
            count1++;
        else if (s[i] == '0')
            count0++;
    }
    if (s.length() % 2 == 0 && (count0 != 0 && count1 != 0))
        cout << abs(count1 - count0) / 2 << endl;
    else
        cout << -1 << endl;
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