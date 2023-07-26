#include<stdio.h>
void main()
{ int a,b,c;
    printf("enterthe ab and c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("a is gretest");}
if(b>a&&b>c)
{
    printf("b is ggretest ");
}
    if(c>a&&c>b)
{
    printf("c is gretest");
}
}