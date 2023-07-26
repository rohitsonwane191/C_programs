#include<stdio.h>
void main()
{
int i,j,n;
printf("ente the number");
scanf("%d",&n);
for ( i = 1; i <=n; i++)
{
    for ( j = i; j <2*i-1; j++)
    {
        printf("*");
    }
    printf("\n");
}
}