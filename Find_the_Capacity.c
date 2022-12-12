#include<stdio.h>
int main()
{
    int s[4];
    scanf("%d%d%d",&s[0],&s[1],&s[2]);
    s[4]=s[0]*s[1]*s[2];
    printf("%dKB",s[4]);
}