// -----------------------------------------square of given number-------------------------------
// #include<stdio.h>
// void main()

// {

// int n,squar=0;
// printf("enter the number");
// scanf("%d",&n);
// squar=n*n;
// printf("squar of given number is =%d",squar);
// }
// -------------------------------------------swaping using third variable--------------------------
// #include<stdio.h>
// void  main()
// {
//     int a,b,c;
//     printf("enter thy number of a ,b and c ");
//     scanf("%d%d",&a,&b);
//     c=a;
//     a=b;
//     b=c;
//     printf("a=%d\nb=%d",a,b);

// }
// -----------------------------------------------swaping using 2 variiable---------------------------
// #include<stdio.h>
// void main()
// {


//     int a,b;
//     printf("enter the number of a and b");
//     scanf("%d%d",&a,&b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("a is =%d\nb is =%d",a,b);
// }
// -----------------------------------------------------area of tringle------------------------------------
// #include<stdio.h>
// void main()
// {
// float h,b,area;
// printf("enter  h and b");
// scanf("%f%f",&h,&b);
// area=(h*b)/2;
// printf("%f",area);
// }
// ----------------------------------------------------area of circle----------------------------------
// #include<stdio.h>
// void main()
// #define pi 3.14 
// {
// int redius;
// float area;
// printf("enter the redius");
// scanf("%d",&redius);
// area=pi*redius*redius;
// printf("area of circle is =%f",area);
// }
// ---------------------------------------------------simle intrest ------------------------------------
// #include<stdio.h>
// void main()
// {

// float p,r,t,si;
// printf("enter principal,rate,time");
// scanf("%f%f%f",&p,&r,&t);
// si=(p*r*t)/100;
// printf(" simle intrest is=%f",si);
// }
// ------------------------------------------------temperature conversion----------------------------------
// #include<stdio.h>
// void main()
// {
// float celsius,fahrenheit;
// printf("enter temperature in celsius:");
// scanf("%f",&celsius);
// fahrenheit=(celsius*9/5)+32;
// printf("fahrenheit =%2.f",fahrenheit);
// }
// ----------------------------------------first and last number sum-----------------------------------
// #include<stdio.h>
// void main()
// {
//     int n,h,r,t,u,s;
//     printf("enter the number");
//     scanf("%d",&n);
//     h=n/1000;
//     t=(n/100)%10;
//     r=(n/10)%10;
//     u=n%10;
//     s=h+u;
//     printf(" given number is =%d\n",n);
//     printf(" sum of first and last number is =%d",s);
// }   

// -----------------------------------------PALINDROM number-----------------------------------
// #include<stdio.h>
// void main()
// {
//     int n,h,r,t,u,s;
//     printf("enter the number");
//     scanf("%d",&n);
//     h=n/100;
//     t=(n/10)%10;
//     r=n%10;
//     s=h*1+t*10+r*100;
    
//     if(n==s)
//     {
//     printf(" palindrom  number ");
//     }
//     else
//     {
//         printf(" not palindrom number");
//     }
// }

// -----------------------------------------ARMSTRON number-----------------------------------
// #include<stdio.h>
// void main()
// {
//     int n,h,r,t,u,s;
//     printf("enter the number");
//     scanf("%d",&n);
//     h=n/100;
//     t=(n/10)%10;
//     r=n%10;
//     s=h*h*h+t*t*t+r*r*r;
    
//     if(n==s)
//     {
//     printf(" ARMSTRON   number ");
//     }
//     else
//     {
//         printf(" not ARMSTRONG number");
//     }
// }
// -----------------------------------------leap year number-----------------------------------
// #include<stdio.h>
// void main()
// {
//     int n;
//     printf("enter the number");
//     scanf("%d",&n);
//     if(n%400==0)
//     {
//         printf("is lip yaer");}
// else if(n%100==0){
// printf("lip ");}
// else if(n%4==0){
// printf("lip year");
//     }
//     else printf("not lip year");
// }
// ---------------------------------------(week 1-14)----------------------------------------------
// #include<stdio.h>
// #define pi 3.14
// void main()
// {
// char n,s,c,r;
// printf("enter character for user requarment ");
// scanf("%c",&n);
// if(n=='s')
// {float area,side;
// printf("enter the lenth of side");
// scanf("%f",&side);
// area= side*side;
// printf("area of squar=%f",area);
// }
// if(n=='c')
// {
// float area,redius;
// printf("enter redius");
// scanf("%f",&redius);
// area=pi*redius*redius;
// printf(" area of circle=%f",area);
// }
// if(n=='r')
// {
// float area,lenth,width;
// printf("enter lenth and width ");
// scanf("%f%f",&lenth,&width);
// area=lenth*width;
// printf("area of rectangle=%f",area);
// }

// }
// ----------------------------------------------voel or not------------------------------------------------
// #include<stdio.h>
// void main()
// {
//     char n;
//     printf("enter character");
//     scanf("%c",&n);
//     if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
//     {
//         printf(" is vowel ");
//     }
//     else
//     printf(" not vowel");
// }
#include<stdio.h>
void main()
{
float bs=1,ta=0,da=0,gs=0,ns=0,pf=0;
printf("enter the salary");
scanf("%f",&bs);
ta=(bs*10)/100;
printf("treavel allowance is rs %f\n",ta);
pf=(bs*7.8)/100;
printf("trovident fund  is rs %f\n",pf);
da=500;
printf("dearness allowance is rs %f\n",da  );
gs=bs+da+ta;
printf("gross salary is %f\n",gs);
ns=gs-pf;
printf("net salary is %2f\n",ns);
}