This repo consists of all the solutions of the questions which I have done on the the following sites:

- Codechef
- Codeforces
- CSES
- Hackerearth
- SPOJ
- Love Babbar 450 Ques DSA List

# RE-DO

    - 479A - Expression
    - 144A - Arrival Of The General
    - 690B - Last Year's Substring
    - 101A - Regular Bracket Sequence
    - 261A - Pashmak and Garden

## CEIL Function

Answer = ceil(m/a) _ ceil(n/a), where ceil(x) is the least integer which is above or equal to x. Using integers only, it is usually written as ((m+a-1)/a)_((n+a-1)/a). Note that answer may be as large as 10^18, which does not fit in 32-bit integer.

- 101A - Regular Bracket Sequence(A better approach)

```c++
#include <bits/stdc++.h>
using namespace std;

bool solve()
{
    string s;
    cin >> s;
    if (s.length() % 2 == 1)
        return false;
    if (s[0] == ')' || s[s.length() - 1] == '(')
        return false;
    return true;
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
        if (solve())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
```
