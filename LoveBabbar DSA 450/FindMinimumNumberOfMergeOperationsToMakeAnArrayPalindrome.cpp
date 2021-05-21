#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int start = 0, last = n - 1, count = 0;
    while (start < last)
    {
        if (arr[start] == arr[last])
        {
            start++;
            last--;
        }
        else if (arr[start] > arr[last])
        {
            last--;
            arr[last] += arr[last + 1];
            count++;
        }
        else
        {
            start++;
            arr[start] += arr[start - 1];
            count++;
        }
    }
    cout << count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}