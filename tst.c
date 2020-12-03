#include <stdio.h>

void solve()
{
    char *s = "corona";
    char *p = s;
    printf("%c\t%c", *(p+2), s[2]);
}

int main()
{
    solve();
}