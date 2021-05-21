#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if(s[0] >= 97 && s[0] <=122)
        cout << char(s[0]-32);
    else
        cout << s[0];
    for(int i=1;i<s.length();i++)
        cout << s[i];

}