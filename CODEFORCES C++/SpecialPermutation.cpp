#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 1)
    {
        for (int i = n; i > 0; i--)
        {
            if (i != (n / 2) + 1)
                cout << i << " ";
        }
        cout << (n / 2) + 1;
    }
    else
        for (int i = n; i > 0; i--)
            cout << i << " ";
    cout << endl;
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