#include<stdio.h>
int main()
{
    int n,k,m,cbp;
    scanf("%d%d%d",&n,&k,&m);
    cbp=k*m;
    if(n%cbp==0)
    {
        printf("%d",n/cbp);
    }
    else
    {
        printf("%d",(n/cbp)+1);
    }
}