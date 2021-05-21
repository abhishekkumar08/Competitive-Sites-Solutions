#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int minindex = 0, minvalue = INT_MAX, maxaindex = 0, maxavalue = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > maxavalue)
        {
            maxaindex = i;
            maxavalue = x;
        }
        if (x <= minvalue)
        {
            minindex = i;
            minvalue = x;
        }
    }
    if (maxaindex > minindex)
        cout << maxaindex - 1 + n - minindex - 1;
    else
        cout << maxaindex - 1 + n - minindex;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}