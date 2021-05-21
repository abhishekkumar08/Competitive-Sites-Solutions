#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, counter;
    cin >> n >> counter;
    int res[n + 1];
    for (int i = 1; i <= n; ++i)
        cin >> res[i];
    int i = 1, end, p;
    while (counter)
    {
        while (res[i] == 0 && i <= n)
            ++i;

        if (i >= n)
            break;

        p = log2(res[i]);
        int ac = int(pow(2, p));
        res[i] = res[i] ^ ac;
        end = i + 1;
        // cout << int(pow(2, p)) << endl;
        // cout << "Array " << arr[i] << " i value: " << i << " " << endl;
        while (end <= n)
        {
            if ((res[end] ^ ac) < res[end])
            {
                res[end] = res[end] ^ ac;
                break;
            }
            ++end;
        }
        if (end > n)
        {
            res[end - 1] = res[end - 1] ^ ac;
        }
        --counter;
    }
    if (counter % 2 != 0 && n == 2)
    {
        res[1] = res[1] ^ 1;
        res[2] = res[2] ^ 1;
    }

    for (int i = 1; i <= n; ++i)
        cout << res[i] << " ";

    cout << "\n";
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