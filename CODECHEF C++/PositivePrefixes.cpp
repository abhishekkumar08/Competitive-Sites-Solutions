#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    long long arr[n + 1];
    if (n % 2 == 0)
    {
        for (long long i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
                arr[i] = i;
            else
                arr[i] = -i;
        }
    }
    else
    {
        for (long long i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
                arr[i] = -i;
            else
                arr[i] = i;
        }
    }

    long long add = 0, kcount = 0;
    for (long long i = 1; i <= n; i++)
    {
        add += arr[i];
        if (add > 0)
            kcount++;
    }

    if (kcount > k)
    {
        for (long long i = n; i >= 1; i -= 2)
        {
            arr[i] *= -1;
            kcount--;
            if (kcount == k)
                break;
        }
    }

    if (kcount < k)
    {
        for (long long i = n; i >= 1; i--)
        {
            if (arr[i] < 0)
            {
                arr[i] *= -1;
                kcount++;
            }
            if (kcount == k)
                break;
        }
    }

    for (long long i = 1; i <= n; i++)
        cout << arr[i] << " ";
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