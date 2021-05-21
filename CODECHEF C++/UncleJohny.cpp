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
        int n, i = 0;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        int k;
        cin >> k;
        int x = arr[k - 1];
        sort(arr, arr + n);
        for (i = 0; i < n; i++)
        {
            if (arr[i] == x)
                break;
        }
        cout << i + 1 << endl;
    }
}