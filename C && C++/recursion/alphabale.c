#include<stdio.h>
void main()
{
    char key;
printf("enter the key");
scanf("%c",&key);
if(key>97&&key<=122)
{
    printf("is small charactor");
}
else 
{
    printf("capital charactor");
}
}