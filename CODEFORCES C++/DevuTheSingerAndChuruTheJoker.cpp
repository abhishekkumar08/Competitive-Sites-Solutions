#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    sum += (n - 1) * 10;
    int count = (n - 1) * 2;
    if (sum < d)
        count += (d - sum) / 5;
    if (sum <= d)
        cout
            << count << endl;
    else
        cout << -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}