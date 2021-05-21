#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr(n + 1, 0);
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        arr[x] = 1;
    }
    int l;
    cin >> l;
    for (int i = 0; i < l; i++)
    {
        int a;
        cin >> a;
        arr[a] = 1;
    }
    int flag = 1;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
        cout << "Oh, my keyboard!";
    else
        cout << "I become the guy.";
}