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
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b)
        cout << "YES";
    else if (b == c)
        cout << "YES";
    else if (a == c)
        cout << "YES";
    else
        cout << "NO";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}