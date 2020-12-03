#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    double sum=0,p=n;
    while(n--){
        int x;
        cin >> x;
        sum+=x;
    }
    cout << fixed << setprecision(12) << sum/p;
}