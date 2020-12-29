#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string str = "";
    string ans = "abc";
    int i = 0, j = 0;

    while (j < n)
    {
        int ori = k;
        while (ori-- && j < n)
        {
            str += ans[i];
            j++;
        }
        i++;
        if (i >= 3)
            i = 0;
    }
    if (str.length() > 5)
    {
        for (int i = 0; i < str.length() - 1; i += 4)
            swap(str[i], str[i + 1]);
    }
    cout << str << endl;
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