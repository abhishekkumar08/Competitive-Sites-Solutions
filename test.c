#include<stdio.h>
#include<string.h>
int main(){
    int n, count=0;
    scanf("%d", &n);
    char str[n];
    for(int i=0;i<n;i++)
     scanf("%c", str[i] );
    for(int i=0;i<n;i++)
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            continue;
        else
            count++;
    printf("%d", count);
}