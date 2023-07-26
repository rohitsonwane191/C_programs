#include<stdio.h>
void main()
{
    int a,b,c,d,sum,f;
    printf("enter the number");
    scanf("%d",&f);
    a=f/1000;
    b=(f/100)%10;
    c=(f/10)%10;
    d=f%10;
    sum=a+d;
    printf("sum=%d",sum);
}