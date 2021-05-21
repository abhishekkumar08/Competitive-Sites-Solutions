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
        int temp = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
            arr[i + 1] = arr[i];
        arr[0] = temp;
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}