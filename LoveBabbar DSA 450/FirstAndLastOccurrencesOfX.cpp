#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    int start = 0, last = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
        {
            start = i;
            break;
        }
    for (int i = n - 1; i >= 0; i--)
        if (arr[i] == x)
        {
            last = i;
            break;
        }

    if (start == 0 && last == 0)
        cout << -1 << endl;
    else
        cout << start << " " << last << endl;
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