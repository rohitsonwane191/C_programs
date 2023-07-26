#include<stdio.h>
void main ()
{
   int n,r,sum=0;
   printf("enter the number");
   scanf("%d",&n);

   while(n!=0)
   {
      r=n%10;
      n=n/10;

      sum=sum+r;

   }
      printf("%d",sum); 
}
