#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n, counteven = 0, countodd = 0, lasteven = 0, lastodd = 0;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            counteven++;
            lasteven = i+1;
        }
        else
        {
            countodd++;
            lastodd = i+1;
        }
    }
    if (countodd > counteven)
        return lasteven;
    else
        return lastodd;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << solve();
}