#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> arr(n + 1, 0);
    for (int i = 1; i <= n; ++i)
        cin >> arr[i];
    if (n == 1)
        cout << arr[1];
    else
    {
        long long maxa = 0;
        int i = 1;
        while (i <= n)
        {
            long long j = i, ans = 0, re = 0;
            while (j <= n)
            {
                ans = j + arr[j];
                re += arr[j];
                j = ans;
            }
            maxa = max(re, maxa);
            i++;
        }
        cout << maxa << endl;
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