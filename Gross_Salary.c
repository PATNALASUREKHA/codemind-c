#include<stdio.h>
int main()
{
    float ba,da,hra;
    scanf("%f%f%f",&ba,&da,&hra);
    if(ba<=10000)
    {
        da=0.8*ba;
        hra=0.2*ba;
    }
    else if(ba<=20000)
    {
        da=0.9*ba;
        hra=0.25*ba;
    }
    else if(ba>20000)
    {
        da=0.95*ba;
        hra=0.3*ba;
    }
    {
        
    float gs;
    gs=ba+hra+da;
    printf("%0.2f",gs);
   }
}