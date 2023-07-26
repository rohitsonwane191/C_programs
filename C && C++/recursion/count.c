-------------------------------------count number---------------------------------------------------------
#include<stdio.h>
void main()
{
    int i,n,c=0;
    printf("enter the number");
    scanf("%d",&n);
    while (n>0)

{    c=c+1;
n=n/10;

    }
printf("%d",c);
c++;    
}
