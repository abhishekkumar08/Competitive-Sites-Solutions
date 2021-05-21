#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    ;
    cin >> s;
    int rem = 120 - n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            count++;
    }
    int percentage = count + rem;
    if (percentage >= 90)
        cout << "YES\n";
    else
        cout << "NO\n";
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