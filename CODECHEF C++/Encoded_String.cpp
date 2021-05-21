#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    map<string, string> arr;
    arr.insert({"0000", "a"});
    arr.insert({"0001", "b"});
    arr.insert({"0010", "c"});
    arr.insert({"0011", "d"});
    arr.insert({"0100", "e"});
    arr.insert({"0101", "f"});
    arr.insert({"0110", "g"});
    arr.insert({"0111", "h"});
    arr.insert({"1000", "i"});
    arr.insert({"1001", "j"});
    arr.insert({"1010", "k"});
    arr.insert({"1011", "l"});
    arr.insert({"1100", "m"});
    arr.insert({"1101", "n"});
    arr.insert({"1110", "o"});
    arr.insert({"1111", "p"});

    string st = "";
    for (int i = 0; i <= n - 4; i += 4)
    {
        st = s.substr(i, i + 4);
        if (arr.find(st) != arr.end())
            ans += arr[st];
    }
    fflush(stdout);
    cout << ans << endl;
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