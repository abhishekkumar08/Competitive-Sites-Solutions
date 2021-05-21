#include <bits/stdc++.h>
using namespace std;

string solve()
{
    string s;
    cin >> s;
    int arr[256] = {0};
    for (int i = 0; i < s.length() / 2 + s.length() % 2; i++)
        arr[s[i]]++;
    for (int i = s.length() / 2; i < s.length(); i++)
        arr[s[i]]--;

    for (int i = 0; i < s.length() / 2; i++)
        if (arr[i] != 0)
            return "NO";

    return "YES";
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
        cout << solve() << endl;
    }
}