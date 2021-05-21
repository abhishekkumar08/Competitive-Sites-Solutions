#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    long long sum = 0, odd = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    if (n % 2 == 0 && sum % 2 == 0)
        cout << "YES\n";
    else if (n % 2 != 0 && sum % 2 != 0)
        cout << "NO\n";
    else if (n % 2 != 0 && sum % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
                odd++;
        }
        if (odd != 0 && odd % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    else
        cout << "NO\n";
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