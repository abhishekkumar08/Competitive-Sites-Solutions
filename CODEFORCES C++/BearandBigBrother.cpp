#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int lim, bob;
    cin >> lim >> bob;
    int count=0;
    while (lim<=bob)
    {
        lim=lim*3;
        bob=bob*2;
        count++;
    }
    cout << count;
    
}