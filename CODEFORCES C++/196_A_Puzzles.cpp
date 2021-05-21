#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; ++i)
        cin >> arr[i];

    sort(arr, arr + n);
    cout << arr[n - 1] - arr[0];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}