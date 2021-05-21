#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    long long count1 = 0, count2 = 0;
    while (n--)
    {
        long long m;
        cin >> m;

        while (m--)
        {
            long long x;
            cin >> x;
            if (x < 0)
                count1++;
            else
                count2++;
        }
    }

    cout << count1 * count2 << endl;
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