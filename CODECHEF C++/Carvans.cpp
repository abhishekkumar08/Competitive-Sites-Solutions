#include <bits/stdc++.h>
#include <bitset>
using namespace std;

#define ff first
#define ss second
#define ll long long int
#define pb push_back
#define mp make_pair
#define up upper_bound
#define lb lower_bound
// Data Structures
#define vi vector<int>
#define si set<int>
#define mii map<int, int>
#define pii pair<int, int>
#define pqmax priority_queue<int>
#define pqmin priority_queue<int, vi, greater<int>>
// Algorithm
#define sortf(v) sort(v.begin(), v.end())
#define sortb(v) sort(v.begin(), v.end(), greater<int>())
#define findf(v, val) find(v.begin(), v.end(), val)
// Bit Manipulation
#define iseven(n) !(n & 1)
#define getBit(S, j) ((S & (1 << j)) > 0 ? 1 : 0)
#define setBit(S, j) (S | (1 << j))
#define clearBit(S, j) (S & ~(1 << j))
#define updateBit(S, j, v) ((S & ~(1 << j)) | (v << j))
#define clearLastBits(S, j) (S & (-1 << j))
#define clearrangebits(S, i, j) (S & (((~0) << (j + 1)) | ((1 << i) - 1)))
#define toggleBit(S, j) (S ^= (1 << j))
#define lowBit(S) (S & (-S))
#define setAll(S, n) (S = (1 << n) - 1)
#define isPowerOfTwo(S) (!(S & (S - 1)))
// Miscellaneous
#define fori(i, s, n) for (long long int i = s; i < n; i++)
#define ctsetbit(x) __builtin_popcountll(x)
#define ctzrobit(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x

void solve()
{
    int n, count = 0, mina = INT_MAX;
    cin >> n;
    int arr[n];
    fori(i, 0, n) cin >> arr[i];
    fori(i, 0, n)
    {
        mina = min(mina, arr[i]);
        if (mina >= arr[i])
            count++;
    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}