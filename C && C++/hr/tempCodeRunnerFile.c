#include<stdio.h>
void main()
{
   int n,fact=1,i;
   printf("enter the number");
   scanf("%d",&n);

   for(i=n;i>=1;i--)
   fact=fact*i;
   printf("%d ",fact);
}
