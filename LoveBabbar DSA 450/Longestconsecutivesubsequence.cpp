#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    set<int> st;
    for (int i = 0; i < n; i++)
        st.insert(arr[i]);

    for (int i = 0; i < n; i++)
    {
        if(st.find(arr[i]-1)==st.end()){
                
        }
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}