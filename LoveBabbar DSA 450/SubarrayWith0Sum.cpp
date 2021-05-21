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
        // int flag = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     int sum = 0;
        //     for (int j = i; j < n; j++)
        //     {
        //         sum += arr[j];
        //         if (sum == 0)
        //         {
        //             flag = 1;
        //             cout << "Yes\n";
        //             break;
        //         }
        //     }
        //     if (flag == 1)
        //         break;
        // }
        // if (flag!=1)
        //     cout << "No\n";

        // A better approach

        unordered_set<int> sumSet;

        // Traverse through array and store prefix sums
        int sum = 0, flag = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];

            // If prefix sum is 0 or it is already present
            if (sum == 0 || sumSet.find(sum) != sumSet.end())
            {
                flag=1;
                cout << "Yes\n";
                break;
            }
            sumSet.insert(sum);
        }
        if (flag != 1)
            cout << "No\n";
    }
}