#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long w, h, n;
    cin >> w >> h >> n;
    long long count = 1;

    int i = 0;
    while (count < n)
    {
        if (w % 2 == 0)
        {
            count += pow(2, i);
            w /= 2;
        }
        else if (h % 2 == 0)
        {
            count += pow(2, i);
            h /= 2;
        }
        else
            break;
        i++;
    }

    if (count >= n)
        cout << "YES\n";
    else
        cout << "NO\n";
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