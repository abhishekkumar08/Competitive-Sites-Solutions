#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr1[n], arr2[m];
        unordered_set<int> aset;
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
            aset.insert(arr1[i]);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
            aset.insert(arr2[i]);
        }
        cout << aset.size() << endl;
    }
}