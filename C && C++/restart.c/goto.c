
// gotom statment //

#include<stdio.h>
void main()
{ goto bus;
printf("12th pass\n");
 printf("greguation pass\n ");
printf("post greguat pass\n ");
 bus: printf("job\n");
printf("wolf tour\n");

}

// continue statment//
/*#include<stdio.h>
void main()
{
int i,age,vid;
char name[20];
for(i=1;i<=15;i++){
printf("enter the name ");
gets(name);
printf("enter the age");
scanf("%d",&age);
if(age<18) continue;
printf("enter then vid ");
 scanf("%d",vid);
}
}*/
//    Break statment   //

/*#include <stdio.h>
void main()
{
    int i, j, k, r;
    char ch = 65;

    printf("enter the limit of pyramid");
    scanf("%d", &r);
    for (i = 1; i <= r; i++)
    {
        for (k = 1; k <= 60 - i; k++)
            printf(" ");
        ch == 65;
        if (r <= 5)
            break;
        for (j = 1; j <= (2 * i - 1); j++)

            printf("%c", ch);
        ch++;
        printf("\n");
    }
}*/
//  Break statment ;  //

/*#include<stdio.h>
void main()
{
int i,a,b,c;
printf("enter the number of a,b");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
if(a<20&&b>30) break;
c=a+b;
printf("%d",c);
}}*/
// Exit() statment //

/*#include<stdio.h>
#include<stdlib.h>
void main()
{
int a,b,sum;
printf("enter nthe number of a nad b");
scanf("%d%d",&a,&b);
if(a<0||b<0) exit(0);
sum=a+b;
printf("sum is %d",sum);
} */
                              //   switch statment//  
/*#include <stdio.h>
void main()
{
float a,b,re;
char op;
printf("enter the number of a");
scanf("%f",&a);
printf("enter the oprrater");
scanf("\n%c",&op);
printf("enter the number of ");
scanf("%f",&b);
switch(op)
{

case '+' : re=a+b; printf("%f",re);
break;
case '-' : re=a-b; printf("%f",re);
break;
case '*' : re=a*b; printf("%f",re);
break;
case '/' : re=a/b; printf("%f",re);
break;
}
}
*/                          // switch statment
/*#include<stdio.h>
void main()
{
int choice;
printf("\n press 1. english");
printf("\n press 1. hindi");
printf("enter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("\n %d is sellected language is english",1);
break;
case 2:printf("\n is sellected language is hindi");
break;
default: printf("\n is sellected laguage is not avalable");

}


}*/                           //  parameter statment 
                         // non parameter and non return value statment //
/*#include<stdio.h>
void display()
{

printf("\nhellow to all ");
} 


void main()
{
printf("welcome");
display();

}*/

/*#include<stdio.h>
void display()
{
printf("....hellow ");
printf(".... haed work ");
printf(" .... its esy work ");

}
void main()
{
printf("welcome");
display();
printf("\n bey ");

}*/

/*#include<stdio.h>
void sqesar()
{
int n,sq;
printf("enter the number ");
scanf("%d",&n);
sq=n*n;
printf("%d",sq);
}
void main()
{
sqesar();
}*/          
 /*#include<stdio.h>
 void sqare( int num)
 { int sqare;
 sqare=num*num;
 printf("%d",sqare);


 }
void main()
{
int n;
printf("enter the jumber of n");
scanf("%d",&n);
sqare(n);
}*/
/*#include<stdio.h>
int  guna( int power)
{ int sqare;
    sqare=power*power;

    return(sqare);


}
void main()
{
int n,s,sqare;
printf("enter the number of n");
scanf("%d",&n);
 s=guna(n);
printf("%d",s);

}*/
 /*#include<stdio.h>
 void  areas(int  aos)
 { float area;
area=3.14*aos*aos;
printf("%f",area);
 }

void main()
{int r;

printf("enter thev area of ceircle");
scanf("%d",&r);
areas(r);


}*/



/*#include<stdio.h>
float area( float redius)
{
float rd;
rd=3.14*redius*redius;
return(rd);

}
void main()
{
int r;
float s;

printf("enter the redius");
scanf("%d",&r);
s=area(r);
printf("%f",s);

}*/
               // a powe b


 /* #include<stdio.h> 
  int  pow(int a, int b)
  {
    int i,p=1;
    for(i=1;i<=b;i++)ś
p=p*a;
return(p);
  }            
  void main()
  {
    int a,b,p;
    printf("enter the number of a and b");
    scanf("%d%d",&a,&b);
    p=pow(a,b);
    printf("%d",p);
  }*/
  /*#include<stdio.h>
   void swap(int *x,int *y)
  {int temp;
  temp=*x;
  *x=*y;
  *y=temp;

  }
  void main()
  {int a,b;
printf("enter the a and b");
scanf("%d%d",&a,&b);
swap(&a,&b);
printf("%d",a);
printf("%d",b);

  }*/
/*#include<stdio.h>
int  factorial(int num)
{
int i,fact=1;
for(i=num;i>=1;i--)
fact=fact*i;
return(fact);
}
void main()
{ int n ,ph;
printf("enter the number ");
scanf("%d",&n);
ph=factorial(n);
printf("%d",ph);
}
/*#include<stdio.h>
 void  factorial(int *a, int *b)
{
int c;
c=*a;
*b=*a;
*b=c;

}
void main()
{ int a,b;
printf("enter the numbera  b");
scanf("%d%d",&a,&b);
factorial(&a,&b);
printf("%d%d",a,b);

}*/
 /*#include<stdio.h>
 void main()
 {
int i,n,pow;
printf("enter the number oe ");
scanf("%d",&n);
for(i=n;i>=10;i++)
pow=n*i;
printf("%d",pow);
}
*/
/*#include<stdio.h>
int sum(int num);
int main()

{printf("sum is %d ",sum(5));
return 0;


}

int sum(int n)
{
  if (n==1)
  {
    return 1;
  }
  int sumNm1=sum(n-1);
  int sumN=sumNm1+n;
  return sumN;
}*/