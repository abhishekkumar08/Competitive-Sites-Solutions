#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s, a;
    cin >> s >> a;
    string temp = s + s;
    if (temp.find(a) != string::npos)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}