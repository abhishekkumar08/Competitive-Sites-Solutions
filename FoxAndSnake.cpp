#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int r, c, flag = 0;
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        if (i % 2 == 0)
            for (int j = 0; j < c; j++)
                cout << "#";
        else
        {
            if (flag % 2 == 0)
            {
                for (int j = 0; j < c - 1; j++)
                    cout
                        << ".";
                cout << "#";
            }
            else
            {
                cout << "#";
                for (int j = 0; j < c - 1; j++)
                    cout << ".";
            }
            flag++;
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}