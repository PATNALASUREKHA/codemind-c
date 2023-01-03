#include<stdio.h>
int main()
{
    int h,p,f;
    scanf("%d%d%d",&h,&p,&f);
    if(h>50&&p>60&&f>100)
    {
        printf("10");
    }
    else if(h>50&&p>60)
    {
        printf("9");
    }
    else if(p>60&&f>100)
    {
        printf("8");
    }
    else if(h>50&&f>100)
    {
        printf("7");
    }
    else if(h>50||p>60||f>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
}