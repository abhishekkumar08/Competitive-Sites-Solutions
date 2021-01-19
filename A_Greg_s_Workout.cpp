#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 10000000007
#define foras(i, n) for (int i = 0; i < n; ++i)
#define fords(i, n) for (int i = n - 1; i >= 0; --i)
#define vi vector<long long>
#define st set<long long>
#define mp map<long long, long long>
#define sortas(arr) sort(arr.begin(), arr.end())
#define sortds(arr) sort(arr.begin(), arr.end(), greate<long long>())

void solve()
{
    int n;
    cin >> n;
    vi arr(3, 0);
    int index = 0, maxa = 0;
    foras(i, n)
    {
        int x;
        cin >> x;
        arr[i % 3] += x;
        if (maxa < arr[i % 3])
        {
            maxa = arr[i % 3];
            index = i % 3;
        }
    }
    // cout << maxa << " ";

    // cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    if (index == 0)
        cout << "chest";
    else if (index == 1)
        cout << "biceps";
    else
        cout << "back";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}