#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    getline(cin, s);
    unordered_set<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            st.insert(s[i]);
    }
    cout << st.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}