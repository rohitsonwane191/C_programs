/*#include<stdio.h>
void main()
{
int i,a,table=0;
printf("enter the number");
scanf("%d",&a);
for ( i = 1; i <=10; i++)
{
    table=i*a;
    printf("the table is:%d\n",table);
}
}*/
/*#include<stdio.h>
void main()
{
    int a ,b;
    printf("enter the number of a and b");
    scanf("%d%d",&a,&b); 
if(a<b)
{
    printf(" a is smolle than");
}
else 
printf("b is smoller than ");
}
*/
/*#include<stdio.h>
#include<string.h>
void main()
{
    int roll,h,e,bio,ch,z,total;
float per;
printf("enter the roll number\n hindi\n english\n bio\n ch\n z");
scanf("%d%d%d%d%d\n",&roll,&h,&e,&bio,&ch,&z);
total=h+e+bio+ch+z;
printf(" total is :%d\n",total);
 per=(float)total/5;
printf("%f\n",per);
}
*/
#include<stdio.h>
void main()
{
int i,j,k,n;
printf("enter the number");
scanf("%d",&n);
for ( i = n; i >=1; i--)
{
    for ( j = i; j <40-i; j++)
    {
        printf(" ");
    }
    for ( k = i; k <=2*n-i; k++)
    {
        printf("*");

    }
    printf("\n");
}



}

