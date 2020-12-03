#include <bits/stdc++.h>
using namespace std;

string solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int ori = i, flag = 1;

        while (ori)
        {
            if (ori % 10 == 4 || ori % 10 == 7)
                ori /= 10;
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1 && n % i == 0)
            return "YES";

    }
        return "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << solve();
}