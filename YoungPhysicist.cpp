#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, x = 0, y = 0, z = 0;
    cin >> n;
    int arr[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> arr[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        x += arr[i][0];
        y += arr[i][1];
        z += arr[i][2];
    }
    if ((x == 0 && y == 0) && z == 0)
        cout << "YES";
    else
        cout << "NO";
}