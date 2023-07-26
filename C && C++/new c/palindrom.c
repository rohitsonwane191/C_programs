
------------------------------------------------palindrom-----------------------------------------------------------------
#include<stdio.h>
void main()
{
int h,t,u,s,n,k,r i;
printf("enter the number");
scanf("%d",&n);
for (  i = 1; i <=n; i++)
{
    

k=i/1000;
h=(i/100)%10;
t=(i/10)%10;
u=i%10;
s=k+h+t+u;
r=(u*1000)+(t*100)+(h*10)+(k*1);
}
printf("total is =%d",s);
printf("revers is =%d\n",r);
if(n==r)
{
    printf("variable is palindrom");
}
else
{
    printf("variable is not palindrom");
}

}
