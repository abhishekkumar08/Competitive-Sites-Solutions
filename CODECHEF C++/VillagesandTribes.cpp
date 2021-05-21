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
        string s;
        cin >> s;
        int ca = 0, cb = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'A')
            {

                i++;
                while (s[i] != 'B')
                {
                    i++;
                    ca++;
            
                }
                ca = ca + 2;
            }
            if (s[i] == 'B')
            {
                i++;
                while (s[i] != 'B')
                {
                    i++;
                    cb++;
                }
                cb = cb + 2;
            }
        }
        cout << ca << " " << cb << endl;
    }
}