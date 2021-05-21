#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long n, k, x, y;
    cin >> n >> k >> x >> y;
    vector<pair<long, long>> arr;
    if (x == y)
        cout << n << " " << n << endl;
    else
    {

        if (y < x)
        {
            arr.push_back({n, y + n - x});
            arr.push_back({y + n - x, n});
            arr.push_back({0, x - y});
            arr.push_back({x - y, 0});
        }
        else if (y > x)
        {
            arr.push_back({n + x - y, n});
            arr.push_back({n, n + x - y});
            arr.push_back({y - x, 0});
            arr.push_back({0, y - x});
        }
        cout << arr[(k - 1) % 4].first << " " << arr[(k - 1) % 4].second << endl;
    }
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