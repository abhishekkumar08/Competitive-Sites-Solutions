#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // One method
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }

    // Another method

    // int start = 0, last = n - 1;
    // while (start <= last)

    // {
    //     if (arr[start] < 0 && arr[last] < 0)
    //         start++;
    //     else if (arr[start] > 0 && arr[last] < 0)
    //     {
    //         swap(arr[start], arr[last]);
    //         start++;
    //         last--;
    //     }
    //     else if (arr[start] > 0 && arr[last] > 0)
    //         last--;
    //     else
    //     {
    //         start += 1;
    //         last -= 1;
    //     }
    // }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}