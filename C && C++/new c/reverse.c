#include<stdio.h>
void main()
{
    int n,r=0,s=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    printf("%d",s);
}