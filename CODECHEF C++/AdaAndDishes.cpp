#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (n == 1)
        return arr[0];

    if (n == 2)
        return max(arr[0], arr[1]);

    sort(arr, arr + n, greater<int>());

    int i = 2, vesa = arr[0], vesb = arr[1];
    while (i < n)
    {
        if (vesa < vesb)
            vesa += arr[i];
        else
            vesb += arr[i];
        i++;
    }
    return max(vesa, vesb);
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
        cout << solve() << endl;
    }
}