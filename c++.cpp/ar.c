#include<stdio.h>
void main()
{
int a[5],*p,i;
p=a;
printf("enter the element of the array");
for ( i = 0; i <=4; i++)
{
     scanf("%d",&a[i]);
}
for ( p = a; p <=a+4; p++)


{
     printf("%d",*p);
}





}