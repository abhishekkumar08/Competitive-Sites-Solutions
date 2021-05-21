#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int first_company_day, first_prod, second_company_day, second_prod, p;
    cin >> first_company_day >> first_prod >> second_company_day >> second_prod >> p;
    int total = 0, count = 0;
    while (total < p)
    {
        count++;
        if (count >= first_company_day)
            total += first_prod;
        if (count >= second_company_day)
            total += second_prod;
    }
    cout << count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}