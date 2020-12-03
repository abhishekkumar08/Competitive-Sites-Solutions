#include <bits/stdc++.h>
using namespace std;
int lex(string s, string a)
{
    if (a == s)
        return 0;
    if (a < s)
        return 1;
    else
        return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, a;
    cin >> s >> a;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    cout << lex(s,a);
}
