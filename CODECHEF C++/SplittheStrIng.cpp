#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0;
        cin >> n;
        string str;
        cin >> str;
        for (int i = 0; i < n-1; i++)
        {
            if (str[n - 1] == str[i])
            {
                cout << "YES\n";
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "NO\n";
    }
}