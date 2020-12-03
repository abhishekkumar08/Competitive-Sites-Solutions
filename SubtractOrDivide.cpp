#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int count = 0;
    if(n==1)
    cout << count;
    while (n != 2)
    {
        int flag = 1, i = 2;
        while (flag)
        {
            if (n % i == 0 && i < n)
            {
                count++;
                n /= i;
                flag = 0;
            }
            else
            {
                i++;
                n--;
            }
        }
    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}