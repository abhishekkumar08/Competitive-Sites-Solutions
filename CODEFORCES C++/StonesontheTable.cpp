#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    cin >> s;
    int count=0;
    for(int i=0;i<t;i++)
    {
        if(s[i+1]==s[i])
            count++;
    }
    cout << count;
}