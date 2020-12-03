#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    if(n/m==0)
    cout << -1;
    else
    {
        int ans=n/2;
        if(ans%m==0)
            cout <<  ans;
        else
        {
            int a=n/m;
            int d=a*m;
            
        }
            cout << ans+1;
        
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        solve();
}