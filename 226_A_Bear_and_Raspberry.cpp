#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, c;
    cin >> n >> c;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int mina = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        mina = max(mina, arr[i] - arr[i + 1]);
    }
    cout << mina - c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}