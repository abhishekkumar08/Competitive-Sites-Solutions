#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[4], count = 0;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    sort(arr, arr + 4);
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] == arr[i + 1])
            count++;
    }
    cout << count;
}