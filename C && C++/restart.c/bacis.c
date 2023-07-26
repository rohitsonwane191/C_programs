

// 1st program for c//

/*#include<stdio.h>
void main()
{
printf("hello manish");



}*/

/*#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the velue of a and b ");
scanf("%d%d",&a,&b);
c=a*b;
printf("addion velue is =%d",c);        // addition

}*/
// write a program fimd area of circle
/*#include<stdio.h>
void main()
{
float r, pi ;
printf("enter the velue of r");
scanf("%f",&r);
pi=3.14*r*r;
printf("%f",pi);

}*/
// mitter converd to km
/*#include<stdio.h>
void main()
{
int  km,mt;

printf("enter the velue of km\n");
scanf("%d",&mt);
km=mt/1000;
printf("converted velue is =%d\n",km);

}
*/
// exchange velue of two number
/*#include <stdio.h>
void main()
{
    int a, b;
    printf("enter the number of a and b ");
    scanf("%d%d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("the last velue of =%d %d", a, b);
}*/
//    OR

/*#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the number of a and b\n");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("a  =%d\n b=%d",a,b);


}*/
// sum number

/*#include<stdio.h>
void main()
{
int a, b, sum;
printf("enter the number of a and b ");
scanf("%d%d",&a,&b);
sum=a+b;
printf("sum is =%d",sum);

}*/
//  modulus
/*#include<stdio.h>
void main()
{
int q,r,a,b;
printf("enter the number of a and b ");
scanf("%d%d",&a,&b);
q=a/b;
r=a%b;
printf("\nR=%d",r);
printf("\n Q= %d",q);

}*/
/*#include<stdio.h>
void main()
{
int i,j,c,r;
printf("enter the number of n");
scanf("%d%d",&c,&r);
for(i=1;i<=r;i++)
{
for(j=1;j<=c;j++)
printf("%d",i);
printf("\n");
}

}

*/

/*#include<stdio.h>
void main()
{
int i,j,p,n,fact;
float sum=0;
printf("enter the number of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{p=1;
    for(j=1;j<=i;j++)
p=p*i;
 fact=1;
for(j=1;j>=1;j--)
fact=fact*j;

sum=sum+(i/fact);
printf("%.2f",sum);
}}

*/
/*#include<stdio.h>
void main() {
    int i, j, k, r, ch=65;

    printf("enter the limit of pyramid");
    scanf("%d",&r);

for (i=1; i<=r; i++)
{
    for (k=1; k<=40-i; k++)
    printf(" ");
    ch=65;
    for (j=1; j<=(2*i-1); j++)
    printf("%c",ch=65);
    printf("\n");
}
}*/

/*#include <stdio.h>
void main()
{
    float a, b, re;
    char op;
    printf("enter the number of a ");
    scanf("%f", &a);
    prinft("enter the operater");
    scanf("\n%c", &op);
    printf("enter the number of b");
    scanf("%f", &b);
    switch  (op)
    {

    case '+':
        re = a + b;
        printf("\n%f", re);
        break;
    case '*':
        re = a * b;
        printf("\n%f", re);
        break;
    case '-':re = a - b;
        printf("\n%f", re);
        break;
         }
}*/
/*
#include<stdio.h>
 void main()
 {
int i,n,pow;
printf("enter the number oe ");
scanf("%d",&n);

for(i=1;i<=10;++i){
pow=n*i;
printf("%d\n",pow);
 }}*/



/*#include<stdio.h>
void main()
{
int 
i,j,pow,sum=0;
printf("enter the number of n");
scanf("%d",&n);
for(i=1;i<=10;++i){
for(j=i;j=i;++j)
pow=1;
pow=pow*i;6 
sum=sum+pow;}
printf("\n%dsss",pow);
}
*/
/*#include<stdio.h>
void main()
{ int a=70,*p;
p=&a;
printf("\n value of a by variable %d",a);
printf("\n value of a by pointer %d",*p);
printf("\n value od p by pointer %u",p);
}*/
/*
#include<stdio.h>
void swap(int *x, int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}
void main()
{
    int a,b;
    printf("enter the number of a and b");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("\n A=%d",a);
    printf("\n B is %d",b);
}*//*
#include<stdio.h>
int  factorial(int n)
{
int fact;
if (n==1)
fact=1;
else fact =n*factorial(n-1) ;
return(fact);
}
void main()
{
int n,f;
printf("enter rthennumber of n");
scanf("%d",&n);
f=factorial( n);
printf("%d",f);
}*/
/*
#include<stdio.h>
void table(int n)
{int table;
if(n==10)
table=1;
else
table=n;
printf("table =\n%d",table);
}*/


/*#include<stdio.h>
int  factorial(int n)
{
int fact;
if (n==1)
fact=1;
else fact =n+1 ;
return(fact);
}
void main()
{
int n,f;
printf("enter rthennumber of n");
scanf("%d",&n);
f=factorial( n);
printf("%d",f);
}*/

/*#include<stdio.h>
voidmain()
{ int i,subject[5],sum=0;
printf("enter the number of array ");
for(i=0;i<=4;i++)
scanf("%d",&subject[i]);
for ( i = 0; i <=4; i++)
sum=sum+subject[i];
printf("%d",sum);

}*/
    #include<stdio.h>
    void main()
    {
int a[5],i,j,temp;
printf("enter rhe element \n");
for ( i = 0; i <=4; i++)
scanf("%d",&a[i]);

for ( i = 0; i <=4; i++)
{
    for ( j = 0; j <4-i; j++){
    
if(a[j]>a[j+1]) 
    temp=a[j];
   a[j+1]=a[j];
   a[j]=temp;

}
} 
for ( i = 0; i <=4; i++)

printf("%d",a[i]);

    }