// ----------------------------------------------------first and last digits sum number---------------------------------------------
#include<stdio.h>
void main()
{
    int n,h,t,u,s,sum;
    printf("enter the number");
    scanf("%d",&n);
    h=n/1000;
    t=(n/100)%10;
    u=(n/10)%10;
    s=n%10;
    sum=s+h; 
    printf("sum of four digits number =%d",sum);
}