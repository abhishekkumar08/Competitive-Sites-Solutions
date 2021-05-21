#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long n, k;
    cin >> n >> k;
    vector<long> arr(n, 0);
    long sum = 0, count = 0, mcount = 0, tcount = 0;
    for (long i = 0; i < n; ++i)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum < 2 * k)
        cout << -1 << endl;
    else
    {
        int index = 0;
        while (mcount < k)
        {
            int mina = INT_MAX;
            for (int i = 0; i < n; ++i)
            {
                if (mina > (k - mcount - arr[i]))
                {
                    mina = k - mcount - arr[i];
                    index = i;
                }
            }
            mcount += arr[index];
            arr[index] = 0;
            count++;
            if (count == n)
                break;
        }
        // cout << "Count " << count << endl;
        sort(arr.begin(), arr.end(), greater<long>());

        for (int i = 0; i < n && tcount < k; ++i)
        {
            tcount += arr[i];
            count++;
        }
        
        if (mcount >= k && tcount >= k)
            cout << count << endl;
        else
            cout << -1 << endl;
    }
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