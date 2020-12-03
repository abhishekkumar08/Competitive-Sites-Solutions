#include <bits/stdc++.h>
using namespace std;

string solve()
{
    string str;
    cin >> str;
    string s = "hello";
    int j = 0;
    if (str.length() < 5)
        return "NO";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == s[j])
            j++;
        if (j == 5)
            return "YES";
    }
    return "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << solve();
}