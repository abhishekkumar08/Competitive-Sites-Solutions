#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, k, count=0,i=0;
    cin >> t >> k;
    vector<int> arr(t,0);
    for (i = 0; i < t; i++)
        cin >> arr[i];
    for (i = 0; i < t; i++)
        if(arr[i]>=arr[k-1] && arr[i] > 0)
            continue;
        else
            break;
    cout << i;
        
}
