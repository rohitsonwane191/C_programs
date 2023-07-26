/*#include<stdio.h>
void main()
{
char c;
printf("enter the charactor:");
scanf("%c",&c);
if(c>='A'&&c<='Z')
printf("charector is capital\n");
else if(c>=97 && c<=122)
printf("charector is small\n");
else if(c>='0' && c<='9')
printf("digit\n");
else
printf("special characor\n");
}
*/
#include<stdio.h>
int main()
{
int n,r,sum;
printf("enter the  number ");
scanf("%d",&n);
while(n!=0)
r=n%10;
n=n/10;
sum=sum+r*r;
printf("%d",sum);
return 0;
}