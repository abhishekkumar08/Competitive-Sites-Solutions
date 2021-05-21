#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    long long f[n], c[n];
    for (long long i = 0; i < n; i++)
        cin >> f[i];
    for (long long i = 0; i < n; i++)
        cin >> c[i];

    vector<pair<long long, long long>> arr;
    for (long long i = 0; i < n; i++)
        arr.push_back({c[i], f[i]});

    sort(arr.begin(), arr.end());

    long long rem = n, ans = 0, i = 0;
    while (i < n)
    {
        long long fuel = arr[i].second;
        long long cost = arr[i].first;
        // cout << fuel << cost << endl;
        if (fuel <= rem)
        {
            rem -= fuel;
            ans += fuel * cost;
        }
        else
        {
            ans += (rem * cost);
            rem = 0;
            break;
        }
        i++;
        if (rem == 0)
            break;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}