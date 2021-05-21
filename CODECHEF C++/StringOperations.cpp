#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.length(), odd, even, count;
    set<tuple<int, int, int>> st;
    for (int i = 0; i < n; i++)
    {
        odd = 0, even = 0, count = 0;
        for (int j = i; j < n; j++)
        {
            if (s[j] == '1')
                count++;
            else
            {
                if (count % 2 == 0)
                    even++;
                else
                    odd++;
            }
            int len = j - i - 1;
            st.insert({len, even, odd});
        }
    }
    cout << st.size() << endl;
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