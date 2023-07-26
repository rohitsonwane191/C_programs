/*#include<stdio.h>
void main()
{

int i,x=1;
for ( i = 'a'; i <'z'; i++)
{
    printf("%c",i);

}
}*/


#include<stdio.h>
void main()
{
int i,n,sum=0;
printf("emter the number ");
scanf("%d",&n);
for ( i = 1; i <=n; i++)
{
printf("%d\n",i);

sum=sum+i;}
printf("%d\n",sum);



}