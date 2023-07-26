#include<stdio.h>
void main()
{
    float gs,ns,ta,da,pf,bs;
    printf("enter the basic salary");
    scanf("%f",&bs);
    ta=10*bs/100;
    pf=7.8*bs/100;
    da=500;
    gs=bs+da+ta;
    ns=gs-pf;
    printf("gross salary is=%f\n",gs);
    printf("net salary is=%f",ns);
}