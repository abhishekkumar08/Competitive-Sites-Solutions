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

        // One solution
        // int ars[3] = {0};
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> arr[i];
        //     if (arr[i] == 0)
        //         ars[0]++;
        //     else if (arr[i] == 1)
        //         ars[1]++;
        //     else
        //         ars[2]++;
        // }

        // int j = 0;
        // while (j < 3)
        // {
        //     while (ars[j])
        //     {
        //         cout << j << " ";
        //         ars[j]--;
        //     }
        //     j++;
        // }
        // cout << endl;

        // Another solution(Dutch National Flag Algorithm(Optimal Soln))

        int mid = 0;
        int last = n - 1;
        int start = 0;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        while (mid <= last)
        {
            if (arr[mid] == 0)
            {
                swap(arr[mid], arr[start]);
                mid++;
                start++;
            }
            else if (arr[mid] == 2)
            {
                swap(arr[mid], arr[last]);
                last--;
            }
            else if (arr[mid] == 1)
                mid++;
        }
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
}