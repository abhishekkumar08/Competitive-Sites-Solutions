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
        string s;
        cin >> s;
        int first = 0, last = s.length() - 1;
        while (first < last)
        {
            swap(s[first], s[last]);
            first++;
            last--;
        }
        cout << s;
    }
}