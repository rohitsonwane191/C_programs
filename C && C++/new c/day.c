#include<stdio.h>
void main()
{

int n;
printf("enter the  number ");
scanf("%d",&n);
if(n>=1&&n<=7)
{
if(n==1)
{
    printf("monday\n");
}
if(n==2)
{
    printf("tuesday\n");
}if(n==3)
{
    printf("wednesday\n");
}
if(n==4)
{
    printf("thusday\n");
}if(n==5)
{
    printf("friday\n");
}if(n==6)
{
    printf("saturday\n");
}if(n==7)
{
    printf("sunday\n");
}
}
else 
printf("not valid day");
}