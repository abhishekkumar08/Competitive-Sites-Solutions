#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int sum = 0;
        int maxa = INT_MIN;
        for (auto it : arr)
        {
            sum += it;
            maxa = max(sum, maxa);
            if (sum < 0)
                sum = 0;
        }
        cout << maxa << endl;
    }
}