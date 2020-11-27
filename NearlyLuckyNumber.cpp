#include <bits/stdc++.h>
using namespace std;

string solve()
{
    long long n, count = 0;
    cin >> n;
    while (n)
    {
        if (n % 10 == 4 || n % 10 == 7)
            count++;
        n /= 10;
    }
    int ori = count;
    while (count)
    {
        if (count % 10 == 4 || count % 10 == 7)
        {
            count /= 10;
        }
        else
            return "NO";
    }
    if (ori == 0)
        return "NO";
    else
        return "YES";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << solve();
}