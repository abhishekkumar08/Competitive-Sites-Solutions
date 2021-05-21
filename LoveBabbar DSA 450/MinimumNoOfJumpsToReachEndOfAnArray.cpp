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
        int count = 0, i = 0;
        while (1)
        {
            if (arr[i] > 0)
            {
                int j = i + 1, maxa = 0, x = 0;
                while (arr[i]--)
                {
                    if (maxa <= arr[j])
                    {
                        maxa = arr[j];
                        x = j;
                    }
                    j++;
                }
                i = x;
                count++;
                // cout << i << " " << endl;
                cout << maxa << " " << endl;
                if (i + maxa >= n - 1)
                {
                    cout << count << endl;
                    break;
                }
            }
            else
            {
                cout << "-1";
                break;
            }
        }
    }
}