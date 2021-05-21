#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int count = 0, curr = arr[0];
    for (int i = 1; i < n && curr != 0; i++)
    {
        count++;
        curr--;
        curr += arr[i];
    }
    cout << count + curr << endl;
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