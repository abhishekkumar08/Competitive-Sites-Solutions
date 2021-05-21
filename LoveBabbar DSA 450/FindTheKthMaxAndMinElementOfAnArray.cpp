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
        int n, x, k;
        cin >> n;

        priority_queue<int> amax;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            amax.push(x);
        }
        cin >> k;
        int a = n - k;
        while (a--)
        {
            amax.pop();
        }
        cout << amax.top() << endl;
    }
}