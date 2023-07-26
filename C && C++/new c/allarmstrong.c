// ---------------------------------------------- total armstrong number------------------------------------------------------------
#include<stdio.h>
void main()
{
    int i,s,b,h,t,u,re;
    for ( i =1634; i <20000; i++)
    {
    h=i/1000;
    t=(i/100)%10;
    s=(i/10)%10;
    u=i%10;
    re=(u*u*u*u)+(s*s*s*s)+(t*t*t*t)+(h*h*h*h);
    if(i==re)
    {
        printf("%d\n",i);
    }

}
}