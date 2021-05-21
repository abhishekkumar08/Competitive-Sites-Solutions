#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 10000000007
#define foras(i, n) for (int i = 0; i < n; ++i)
#define fords(i, n) for (int i = n - 1; i >= 0; --i)
#define vi vector<int>
#define st set<int>
#define mp map<int, int>
#define sortas(arr) sort(arr.begin(), arr.end())
#define sortds(arr) sort(arr.begin(), arr.end(), greate<int>())

void solve()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int totDrink = k * l;
    int reqDrink = totDrink / nl;
    int totLime = c * d;
    int reqSalt = p / np;
    cout << min(reqDrink, min(reqSalt, totLime)) / n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}