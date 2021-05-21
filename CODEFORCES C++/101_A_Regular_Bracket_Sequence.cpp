#include <bits/stdc++.h>
using namespace std;

bool solve()
{
    string s;
    cin >> s;
    if (s.length() % 2 == 1)
        return false;
    if (s[0] == ')' || s[s.length() - 1] == '(')
        return false;
    return true;
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
        if (solve())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}