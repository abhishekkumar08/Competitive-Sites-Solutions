#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int i = 1, sum = 0, count = 0;
    while (sum < n)
    {
        sum += i;
        i++;
        count++;
    }
    if ((sum - n) == 1)
        count++;
    cout << count << endl;
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