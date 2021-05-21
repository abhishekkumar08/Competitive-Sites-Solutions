#include <bits/stdc++.h>
using namespace std;

string solve()
{
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> arr;
    int x, y;
    for (int i = 0; i < n; ++i)
    {
        cin >> x >> y;
        arr.push_back({x, y});
    }
    sort(arr.begin(), arr.end());
    int curr = s;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i].first >= curr)
            return "NO\n";
        else
            curr += arr[i].second;
    }
    return "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << solve();
}