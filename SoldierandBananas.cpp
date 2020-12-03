#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int cost = (k * w * (w + 1)) / 2;
    if (cost - n < 0)
        cout << 0;
    else
        cout << cost - n;
}