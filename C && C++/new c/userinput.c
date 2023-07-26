#include<stdio.h>
void main()
{
    int a,b,c,choice=1;
   while(choice==1||choice==5){
    printf("enter the variable");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d",c);
printf("enter choice 1");
scanf("%d",&choice);
}
}