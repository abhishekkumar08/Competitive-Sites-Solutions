#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        long long k,counter=0;
        cin >> n >> k;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++)
            cin >> arr[i];
        int i=0;
        while(1){
            if(i<n)
                counter+=arr[i];
            else
                {
                    cout << i+(counter/k)+1 << endl;
                    break;
                }
            if(counter>=k)
                counter-=k;
            else
                {
                    cout << i+1 << endl;
                    break;
                }
                
            i++;
        }
    }
}