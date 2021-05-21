#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, d;
    cin >> n >> d;
    long long arr[n];
    long long risk = 0, days = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] >= 80 || arr[i] <= 9)
            risk++;
    }
    int non_risk = n - risk;
    while (risk > 0)
    {
        risk -= d;
        days++;
    }

    while (non_risk > 0)
    {
        non_risk -= d;
        days++;
    }
    cout << days << endl;
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