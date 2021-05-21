#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s, p;
    cin >> s >> p;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] != p[i])
        {
            if (s[i] == '1')
            {
                for (int j = i + 1; j < n; ++j)
                {
                    if (s[j] == '0')
                    {
                        swap(s[i], s[j]);
                        break;
                    }
                }
            }
            else
                break;
        }
    }
    if (s == p)
        cout << "Yes\n";
    else
        cout << "No\n";
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