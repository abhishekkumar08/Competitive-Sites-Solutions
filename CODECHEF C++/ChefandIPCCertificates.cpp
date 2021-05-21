#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int count = 0;
    while (n--)
    {
        int sum = 0, x, ques;
        for (int i = 0; i < k; i++)
        {
            cin >> x;
            sum += x;
        }
        cin >> ques;
        if (ques <= 10 && sum >= m)
            count++;
    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}