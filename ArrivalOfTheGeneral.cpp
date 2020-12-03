#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr[n], maxa = 0, mina = INT_MAX, ms = 0, ml = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > maxa)
        {
            ml = i;
            maxa = arr[i];
        }
        if (arr[i] < mina)
        {
            ms = i;
            mina = arr[i];
        }
    }
    cout << maxa << " " << mina << " " << ms << " " << ml << endl;
    int time = 0;
    while (1)
    {
        if (ml == 0 && ms == n - 1)
            break;
        if (ml != 0)
        {
            swap(arr[ml], arr[ml - 1]);
            ml--;
            time++;
        }
        if (ms != (n - 1))
        {

            swap(arr[ms], arr[ms + 1]);
            ms++;
            time++;
        }
    }
    cout << time << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}