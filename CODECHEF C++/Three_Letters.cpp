#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int len = s.length();
    int arr[26] = {0};
    int count = 0;
    int i = 0;
    for (i = 0; i < len; i++)
        arr[s[i]]++;

    while (len >= 3)
    {
        for (i = 0; i < s.length(); ++i)
        {
            if (arr[s[i]] >= 2)
            {
                len -= 3;
                count++;
                arr[s[i]] -= 2;
                break;
            }
        }
        if (i == s.length())
            break;
    }
    cout << count << endl;
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