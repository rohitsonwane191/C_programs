#include<stdio.h>
void main()
{
    int n,k,h,t,u,s,s1;
    printf("enter the  number of n");
scanf("%d",&n);
k=n/1000;
h=(n/100)%10;
t=(n/10)%10;
u=n%10;
s=k+h+t+u;
s1=(u*1000)+(t*100)+(h*10)+(k*1);
printf(" total of given number =%d",s);
printf(" revers number is= %d",s1);
}
