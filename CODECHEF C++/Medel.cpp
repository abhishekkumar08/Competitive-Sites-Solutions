#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n, 0);
        vector<int> ars(n, 0);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        ars = arr;
        sort(ars.begin(), ars.end());
        int maxa = 0, mina = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == ars[0])
                mina = i;
            if (arr[i] == ars[n - 1])
                maxa = i;
        }
        if (maxa > mina)
            cout << arr[mina] << " " << arr[maxa] << endl;
        else
            cout << arr[maxa] << " " << arr[mina] << endl;
    }
}