#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 10000000007
#define foras(i, n) for (int i = 0; i < n; ++i)
#define fords(i, n) for (int i = n - 1; i >= 0; --i)
#define vi vector<long long>
#define st set<long long>
#define mp map<long long, long long>
#define sortas(arr) sort(arr.begin(), arr.end())
#define sortds(arr) sort(arr.begin(), arr.end(), greate<long long>())

void solve()
{
    int n, k;
    cin >> n >> k;
    int solved = 0, time = 0, t = 0, s = 0;
    vi arr(n, 0);
    foras(i, n)
    {
        cin >> arr[i];
        if (arr[i] >= 0)
        {
            solved++;
            time += arr[i];
            if (arr[i] > k)
                t = 1;
            if (arr[i] > 1)
                s = 1;
        }
    }
    if (ceil(float(n) / float(2)) > solved)
        cout << "Rejected\n";
    else if (t == 1)
        cout << "Too Slow\n";
    else if (s != 1 && time <= n && solved >= n)
        cout << "Bot\n";
    else
        cout << "Accepted\n";
}

int32_t main()
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