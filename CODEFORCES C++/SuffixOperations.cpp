#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    int mid = 0;
    if (n % 2 == 1)
        mid = arr[n / 2];
    else
        mid = arr[(n / 2) - 1];

    int a = abs(mid - abs(arr[0]));
    int b = abs(mid - abs(arr[n - 1]));

    cout << a << " " << b << " " << mid << endl;

    if (a < b)
        arr[n - 1] = mid;
    else
        arr[0] = mid;

    cout << mid << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;

    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            count++;
            for (int j = i + 1; j < n; j++)
                arr[j]++;
        }
        else if (arr[i] < arr[i + 1])
        {
            count++;
            for (int j = i + 1; j < n; j++)
                arr[j]--;
        }
    }
    cout << count << endl;
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