#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int activity;
    cin >> activity;
    string origin;
    cin >> origin;
    int total = 0;
    while (activity--)
    {
        string acti;
        cin >> acti;
        if (acti == "CONTEST_WON")
        {
            int ans;
            cin >> ans;
            total += 300;
            if (ans <= 20)
                total += 20 - ans;
        }
        else if (acti == "TOP_CONTRIBUTOR")
        {
            total += 300;
        }
        else if (acti == "BUG_FOUND")
        {
            int laddoo;
            cin >> laddoo;
            total += laddoo;
        }
        else if (acti == "CONTEST_HOSTED")
        {
            total += 50;
        }
    }
    if (origin == "INDIAN")
        cout << total / 200 << endl;
    else
        cout << total / 400 << endl;
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