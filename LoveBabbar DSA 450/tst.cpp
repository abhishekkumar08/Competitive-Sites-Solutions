#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, b;
    cin >> n >> b;
    int lim = pow(10, b);
    int start = pow(10, b - 1);
    cout << lim << " " << start+1 << endl;
    for (int i = start+1; i < lim; i++)
    {
        int res = 0, qs = i;
        while (qs)
        {
            res += qs % 10;
            qs /= 10;
        }
        if (res == n)
        {
            cout << i << endl;
            break;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}