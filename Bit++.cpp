#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, count = 0;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[1] == '-')
            count--;
        else
            count++;
    }
    cout << count;
}
