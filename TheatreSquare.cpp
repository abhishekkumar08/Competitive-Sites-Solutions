#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, m, a;
    cin >> n >> m >> a;
    cout <<  ((m+a-1)/a)*((n+a-1)/a);
}