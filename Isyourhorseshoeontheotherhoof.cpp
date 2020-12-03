#include <bits/stdc++.h>
using namespace std;

void solve()
{
    unordered_set<int> st;
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        if (st.find(x) != st.end())
            count++;
        else
            st.insert(x);
    }
    cout << count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}