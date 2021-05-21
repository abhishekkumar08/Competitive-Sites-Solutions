#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y;
    cin >> x >> y;
    if ((x - y) % 10 == 9)
        cout << (x - y) - 1;
    else
        cout << (x - y) + 1;
}