#include<stdio.h>
int main()
{
    int n,a[10],i,e=0,o=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      if(a[i]%2==0)
      {
          e++;
      }
      else
      {
          o++;
      }
    }
    printf("%d %d",e,o);
}