#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k, d;
    cin >> n >> k >> d;
    vector<long long> arr(n, 0);
    long long sum = 0;
    for (long long i = 0; i < n; ++i)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum >= (k * d))
        cout << d << endl;
    else
        cout << sum / k << endl;
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