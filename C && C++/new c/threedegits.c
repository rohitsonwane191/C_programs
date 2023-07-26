#include<stdio.h>
void main()
{
int h,t,l,s,n;
printf("enter the number ");
scanf("%d",&n);
h=n/100;
l=(n/10)%10;
t=n%10;
s=h+l+t;
printf("%d",s);
}

/*#include<stdio.h>
void main()
{
int s,n,h,t,l,s1;
printf("enter the n");
scanf("%d",&n);
h=n/100;
l=(n/10)%10;
t=n%10;
s=t+l+h;
s1=h*h+l*l+t*t;
printf(" the sum of three degits number %d\n",s);
printf(" the sqear in sum of three degits number %d\n",s1);
// printf("sqear of the given number for three geditd number%d\n%d\n%d",h*h+l*l+t*t);
}*/


