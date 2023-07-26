/*#include<stdio.h>
int main(){
int h=1,z;
 z= ++h + h++ + ++h;
printf("h=%d\n",h);
printf("z=%d\n",z);
    return 0;
}

#include <stdio.h>
#include <conio.h>
int  main()
{
    int date, month;
    printf("enter the date=\n month\n");
    scanf("%d%d", &date, &month);
    if (date == 3 || date == 10 || date == 17 || date == 24 || date == 31)
        printf(" monday / %d 2022 ", date);

    // else  if(month ==1||month==2||month==3||month==4||month==5||month==6||month==7||month==8||month==9||month==10||month==11||month==12)

    else if (date == 4 || date == 11 || date == 18 || date == 25 || date == 1)
        printf("tuesday / %d -2022", date);

    else if (date == 5 || date == 12 || date == 19 || date == 26 || date == 2)
        printf("wednesday / %d -2022", date);
    else if (date == 6 || date == 13 || date == 20 || date == 27)
        printf("frienday / %d -2022", date);
    else if (date == 7 || date == 14 || date == 21 || date == 28)
        printf("thusday / %d -2022", date);
    else if (date == 8 || date == 15 || date == 22 || date == 29)
        printf("suturday / %d -2022", date);
    else if (date == 9 || date == 16 || date == 23 || date == 30)
        printf("frienday / %d -2022 ", date);
    if (date == 0)
        printf("envelide date");
    // else if(month==1||month==2||month==3||month==4||month==5||month==6||month==7||month==8||month==9||month==10||month==11||month==12)
    else if (month == 1)
        printf("\njanuary");
    else if (month == 2)
        printf("\nfebruary");
    else if (month == 3)
        printf("\nmarch");
    else if (month == 4)
        printf("\n april");
    else if (month == 5)
        printf("\n may");
    else if (month == 6)
        printf("\n june");
    else if (month == 7)
        printf("\n july");
    else if (month == 8)
        printf("\n agust");
    else if (month == 9)
        printf("\n septamber");
    else if (month == 10)
        printf("\n octomber");
    else if (month == 11)
        printf("\nnavember");
    else if (month == 12)
        printf("\n december");

}
 */
/*#include<stdio.h>
int  main()
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
/*#include <stdio.h>
void main()
{
    int a, b, c, d,e;
    printf("enter the velue of a, b ,c and d,e");
    scanf("%d%d%d%d%d", &a, &b, &c, &d,&e);
    if (a > b)
    {
        if (a > c)
            printf("a is grettest");
        else if (a > d)
            printf("a is gretest");
            else if (a>e)
            printf("a is gretest");

    }
    else if (b > c)
        printf("b is grettest");
    else if (b > d)
        printf("b is grettest");
    else if(b>e)
    printf("b is gretest");
    else
    {
        if (c > d)
            printf("c is gretesr");

          else if(c>d)
          printf("d is gretest");
          else if (c>e)
          printf("c is gretest ");
          else if (c<e)
          printf("e is gretest");


          else if (d>e)
          printf("e is gretest");
          else if (d<e)
          printf("e is gretest");


    }

}*/

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


}*/

/*#include<stdio.h>
void main()
{
int ta,da,salary,gs;
printf("enter the salary");
scanf("%d",&salary);
ta=(salary*10)/100;
da=(salary*5)/100;
gs=ta+da+salary;
printf("gross salary is =%d\n%d\n%d\n",ta,da,gs);
if (salary>=1000)*/
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


}*/

/*#include<stdio.h>
void main()

int ta,da,salary,gs;
printf("enter the salary");
scanf("%d",&salary);
ta=(salary*10)/100;
da=(salary*5)/100;
gs=ta+da+salary;
printf("gross salary is =%d",gs);*/
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


}*/

/*#include<stdio.h>
void main()
{
int ta,da,salary,gs;
printf("enter the salary");
scanf("%d",&salary);
ta=(salary*10)/100;
da=(salary*5)/100;
gs=ta+da+salary;
printf("gross salary is =%d",gs);*/
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


}*/

/*#include<stdio.h>
int main()
{
int ta,da,salary,gs;
printf("enter the salary");
scanf("%d",&salary);
ta=(salary*10)/100;
da=(salary*5)/100;
gs=ta+da+salary;
printf("gross salary is =%d",gs);
if(salary>=1000 )
printf("salary is");
    else  (ta=(salary*15)/100)
}
*/

// digits of given number//
/*#include<stdio.h>
void main()
{
int n,r,sum=0;
printf("enter the number");
scanf("%d",&n);
while(n!=0){
r=n%10;
n=n/10;
++n;
sum=sum+r*r;
}
printf("sum of number is %d",sum);
}
*/

/*#include<stdio.h>
void main()
{
int i,j;
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
printf("*");
printf("\n");
}


}*/

/*#include <stdio.h>
void  main()
{
    int n, i, j;
    printf("enter teh numbe of n");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        for (j = 2; j <= (i / j); j++)

            if (!(i % j))
            {
                printf("%d is  not prime\n", i);
                break;
            }
    }

    // for (i = 1; i <= n; i++)
    // {
        // for (j = 2; j <= (i / j); j++)
            // if (j > (i / j))
            // {
               printf("%d is prime\b\b", j);
            // }
    // }
                // printf("%d is prime\n", i);
                // printf("%d is  notprime\b", j);
// 



}
*/

/*#include<stdio.h>
void main()
{
    int i=0,j,n;
printf("emter the number of n");
scanf("%d",&n);
while (i<n*2){// 2*n
i=i+2;//i+2
printf("%d\n",i);}
i=1;
while (i<n*2){// 2*n

i=i+2;
printf("%d",i);
}
}
*/
/*
#include<stdio.h>
void main()
{
int i,j,k=1,n;
printf("entee the number of n");
scanf("%d",&n);
for ( i = 1; i <=n; i++)
{
for ( j = i; j <=n; j++)
{
k=k*j;
printf("%d",k);
}
printf("\n");
}


}*/
/*
#include<iostream>
using namespace std;
class school
{
int m,m2,m3,m4,m5,total1,total2;
char name1[20];
char name2[20];
double pe;
public:
void input()
{
     cout<<"enter the sunject";
     cin>>m>>m2>>m3>>m4>>m5;
          cout<<"enter the sunject"; 
     cin>>m>>m2>>m3>>m4>>m5;
cout<<"enterthe name ";
cin>>name1;
cout<<"enterthe name ";
cin>>name2;

}
public:
void output()
{
     cout<<m<<m2<<m3<<m4<<m5;
     cout<<m<<m2<<m3<<m4<<m5;
cout<<name1;
cout<<name2;
     total1=m+m2+m3+m4+m5;
     total2=m+m2+m3+m4+m5;

}
};
 class school s;
int main()
{
     s.input();
     s.output();
 
}
*/



/*#include<stdio.h>
void  main()
{
int n,r,sum=0;
printf("enter the  number ");
scanf("%d",&n);
 while(n>0){
    {
r=n%10;
n=n/10;
sum=sum+r*r;
}
 }
printf("%d",sum);
}
*/
// #include<stdio.h>
// void main()
// {

// int a[5],i,temp=0;
// printf("enter then number of array");
// for ( i = 0; i <=4; i++)
// { scanf("%d",&a[i]);
// }

// if(a[0]>a[1])
// {
//     temp=a[0];
//     a[1]=a[0]; 
//    a[0]=temp;
// for ( i = 0; i <=4; i++)
   
// printf("%d",a[i]);
// }
// }

// #include <stdio.h>
// void main()
// {
//     int a[5], i, j, velue;
//     printf("enter the element of the arry");
//     for (i = 0; i <= 4; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     for (i = 0; i <= 4; i++)
//     {
//         for (j = 0; j <= 4 - i; j++)
//         {
//             if (a[j] > a[j + 1])
//             {
//                 velue = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = velue;
//             }
//         }
//             printf("%d%d", a[j], a[j + 1]);
//     }
// }
/*
#include<stdio.h>
void main()
{
int i,a[5],key=0,temp=0,found;
printf("ENTER THE NUMBER OF ARAY");
for ( i = 0; i <=4; i++)
{
scanf("%d",&a[i]);
}
printf("enter the key");
for ( i = 0; i <=4; i++)
if(a[i]==key)
{
found=1;
break;
}
if(found==1)
printf("elmenemt found");
else
printf("elembent not found");

}
/*
#include <stdio.h>
void main()
{
    int a[5], i, j, velue;
    printf("enter the element of the arry");
    for (i = 0; i <= 4; i++)    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j <= 4 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                velue = a[j];
                a[j] = a[j + 1];
                a[j + 1] = velue;
            }
        }
    }
    for ( i = 0; i <=4; i++)
    {
                printf("%d\n", a[i]);
}
}
*/
/*#include<stdio.h>
void main(){
int i,j,a[5],temp,max=0,min=0;
printf("enter the array");
for ( i = 0; i <=4; i++)
{
    scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for ( i = 0; i <=4; i++)
{


if(a[i]>max)
{
    max=a[i];
}
if(a[i]<min)
{
min=a[i];

}}
printf("maximum is= %d",max);
printf("minimum is= %d",min);
}
*/
#include<stdio.h>
void main()
{
int i,j,a[4][2];
printf("enter trhe arra rows");
for ( i = 0; i <=3; i++)
{ scanf("%d",&a[i]);
}
printf("enter trhe arra colum");
for ( j = 0; j <=1; j++)
{ scanf("%d  ",&a[j]);
}
for ( i = 0; i <=3; i++){
for ( i = 0; i <=1; i++)
printf("%d\n%d",a[i][j]);
}


}