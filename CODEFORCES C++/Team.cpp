#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,count=0;
    cin >> t;
    while(t--){
        int check=0;
        vector<int> arr(3,0);
        for(int i=0;i<3;i++)
        cin >> arr[i];
        for(int i=0;i<3;i++)
            if(arr[i]==1)
                check++;
        if(check>=2)
            count++;
    }
    cout << count;
}
