#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int ans = 0, count = 0;
    sort(arr, arr + n);
    for (int i = n - 1; i >= 0; i--)
    {
        if (ans > (sum - ans))
            break;
        else
        {
            ans += arr[i];
            count++;
        }
    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}