#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, odda, oddb, evena, evenb;
    cin >> a >> b;
    odda = a / 2 + a % 2;
    oddb = b / 2 + b % 2;
    evena = a / 2;
    evenb = b / 2;
    cout << odda * oddb + evena * evenb << endl;
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