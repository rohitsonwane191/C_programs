#include<stdio.h>
void main()
{
    int i,j,n,count=1,count1=0,k=0;
    printf("enter the number");
    scanf("%d",&n);
    for ( i = 0; i <=n; i++)
    {
        for ( j = 0; j <=n-i; j++)
        {
            printf("  ");
        }
for ( k = 0; k <=i; k++)
{
  if(k==0||i==0)
    count=1;

  else 
  
count=count *(i-k+1)/k;
printf("%4d",count);
  
}
printf("\n");
}
  }


