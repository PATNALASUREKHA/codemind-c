#include<stdio.h>
int main()
{
    int l,b,w,c,il,bl,f;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    il=l+2*w;
    bl=b+2*w;
    f=(il*bl-l*b)*c;
    if(il<=0||bl<=0)
    {
        printf("impossible");
    }
    else
    {
        printf("%d",f);
    }
}