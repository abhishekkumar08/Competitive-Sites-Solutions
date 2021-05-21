#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    long long ori = n;
    while (1)
    {
        int flag = 1;
        long long ori = n;

        map<int, int> mp;
        while (ori)
        {
            long long x = ori % 10;
            if (x != 0)
                mp[x] = 1;
            ori /= 10;
        }
        for (auto i : mp)
        {
            if (n % i.first != 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << n << endl;
            break;
        }
        n++;
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