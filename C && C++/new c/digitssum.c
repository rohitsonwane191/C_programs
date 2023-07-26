// ---------------------------sum of given ditis number-------------------------------
#include<stdio.h>
void main()
{
int n,r,s=0,count=0;
printf("enter the number");
scanf("%d",&n);
while(n>0)
{

    r=n%10;
    s=s+r;
    n=n/10;
count++;
}
printf("sum of given degits number is =%d\n",s);
printf(" count of given number=%d\n",count);

}