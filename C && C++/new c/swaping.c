// ussing thurd variable
/*#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the a and b");
scanf("%d%d",&a,&b);
c=a;
printf("without swaping number is a=%db=%d",a,b);
a=b;
b=c;
printf(" swaping number id a=%db=%d",a,b);
}*/
// without ussing extra variable;
/*#include<stdio.h>
void main()
{
int a,b;
printf("enter the a and b");
scanf("%d%d",&a,&b);
printf("a=%d b=%d\n",a,b);

a=a+b;
b=a-b;
a=a-b;
printf("a=%d b=%d",a,b);
}
*/
// multiplication mathod and devisdion mathod ;
#include<stdio.h>
void main()
{
int  a,b;
printf("enter the a and b");
scanf("%d%d",&a,&b);
a=a*b;
b=a/b;
a=a/b;
printf("%d\n%d",a,b);
}
