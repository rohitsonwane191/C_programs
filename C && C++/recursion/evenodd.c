#include<stdio.h>
void main()
{
    int n;
    printf("emnter the  number ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("even");
    }
    if(n%2==1)
    {
        printf("odd");
    }
}