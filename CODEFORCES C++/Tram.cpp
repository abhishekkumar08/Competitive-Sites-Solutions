#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int cap = 0, cot = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        cot = cot + b - a;
        cap = max(cap, cot);
    }
    cout << cap;
}