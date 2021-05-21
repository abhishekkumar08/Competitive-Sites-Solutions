#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long n, m;
    cin >> n >> m;
    vector<long> john(n, 0);
    vector<long> jack(m, 0);
    long suma = 0, sumb = 0;
    for (long i = 0; i < n; ++i)
    {
        cin >> john[i];
        suma += john[i];
    }
    for (long i = 0; i < m; ++i)
    {
        cin >> jack[i];
        sumb += jack[i];
    }
    long count = 0;

    sort(john.begin(), john.end());
    sort(jack.begin(), jack.end(), greater<long>());
    long i = 0;
    while (suma <= sumb && (i < n && i < m))
    {
        suma = suma + jack[i] - john[i];
        sumb = sumb + john[i] - jack[i];
        i++;
        count++;
    }
    if (suma > sumb)
        cout << count << endl;
    else
        cout << -1 << endl;
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