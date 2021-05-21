#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    char arr[n][n];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> arr[i][j];

    int flag = 1;
    for (int i = 0; i < n && flag; ++i)
    {
        int c = 0;
        for (int j = 0; j < n; ++j)
        {
            if (i - 1 >= 0 && arr[i - 1][j] == 'o')
                c++;
            if (j - 1 >= 0 && arr[i][j - 1] == 'o')
                c++;
            if (i + 1 < n && arr[i + 1][j] == 'o')
                c++;
            if (j + 1 < n && arr[i][j + 1] == 'o')
                c++;

            // cout << "c " << c << endl;
            if (c % 2 == 1)
            {
                flag = 0;
                break;
            }
        }
    }
    flag ? cout << "YES\n" : cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}