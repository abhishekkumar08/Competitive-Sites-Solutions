#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string S, str = "";
    cin >> S;
    stack<char> s;
    for (int i = 0; i < S.length(); i++)
    {
        if (!s.empty() && s.top() == S[i])
        {
            s.pop();
            str.pop_back();
        }
        else
        {
            s.push(S[i]);
            str.push_back(S[i]);
        }
    }
    cout << str;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}