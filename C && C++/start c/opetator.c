/*#include<stdio.h>
void main()
{
int age;
printf("enter the number of age ");
scanf("%d",&age);
(age>18&&age<30)?(printf(" you can vot\n you are yunge mane ")): (printf("not vot\n becouse  you are not yunge"));

}*/
/*#include<stdio.h>
void main()
{ int age ;
printf("enter the age ");
scanf("%d",&age);
if (age<18){
printf("you are childe");
}
else if(age>18&&age<30){
printf("uoy can vot");
}
else
printf("you are not yunge");
}*/

/*#include<stdio.h>
void main()
{
int bsallry;
float ta ,da,pf,ns,gs;
printf("enter the basic salllry");
scanf("%d",&bsallry);
ta=bsallry*12/100;
pf=bsallry*(7.8/100);
da=500;
gs=bsallry+da+ta;
printf(" gross sallry is =%f\n you pf is =-%f\n",gs,pf );
ns=gs-pf;
printf(" nat sallry is =%f\n",ns);

} */

/*#include<stdio.h>
void main()
{
    int a,b;
    printf('enter the number of a nad b');
    scanf("%d",&a);
//(a>0||a<18)?(printf("yes")):(printf("no"));

}*/
/*
#include <stdio.h>
void main(){
    int number;
    printf("enter the number ");
    scanf("%d", &number);
    if (number > 0)

        printf("this number is positive");

    else
        printf("this number is nagative");
}
*/
/*#include <stdio.h>
void main()
{
    int number, i, j;
    printf("enteer the number of ");
    scanf("%d", &number);

    for (i = number; i < 10; i++)
    {
        printf("%d\n", i);
    }
    for (j = number; j > 0; j--)
    {
        printf("%d", j);
    }
}
*/
/*#include <stdio.h>
int  main()
{
    int a;
    int*b;

printf("enetr the number of a");
scanf("%d",*b);
a=b;
printf("%d\n",*b);
return 0;
}
*/

/*#include<stdio.h>
struct emp
{int i;
int code;
char name;
char post;

};
void  show_rec(struct emp E[i])
for(i=0;i<=2;i++){
    printf("\n code; %d",E[i].code);
    printf("\n name; %s",E[i].name);
    printf("\n post ; %s",E[i].post);

}  
void main()
{ int i;
struct emp E[i];
for(i=0;i<=2;i++)
printf("enter code, name and post ");
scanf("%d\n%s\n%s",&E[i].code,E[i].name,E[i].post);
show_re(E[i]);

}*/

/*#include<stdio.h>
void main()
#define age 18
{ int a,b;
printf("enter the number of a ");
scanf("%d",&a);
b=age+a;

printf("%d",b);

}*/
/*#include<stdio.h> 
void swap(int a,int b)
{
int temp=a;
a=b; 
b=temp;
printf("%d%d",a,b);
}
void main()
{
int a,b;
printf("enter the variable of a and b");
scanf("%d\n%d",&a,&b);
swap(a,b);

}
*/
/*#include<stdio.h>
#include<malloc.h>
void main()
{
int *p;
printf("hello friends");
printf("\n wlecome to the progrm ");
p=(int *)malloc(sizeof(int));
*p=100;
printf("\n valueof dynamicvariable =%d",*p);
free(p);
printf("\n program isstill runing ");
printf("\n end of theprogram");
}*/

/*#include<stdio.h>
struct emp;
{

int code;
char name[20];
char post[20];
};
void main()
{
    
struct emp e[3];
int i;
int e;
for (i=0;i<=2;i++)
{
    printf("\n enter the code ,name and post of %d elemployee",i+1);
    scanf("%d\n%s\n%s",&e[i].code,e[i].name,e[i].post);
}



}
*/

 /*#include<stdio.h>
struct student 
{ int roll;
char name[20];
float per;
};
void main()
{
struct student s;
printf("enter eoll");
scanf("%d",&s.roll);

printf("enter nmae");
gets(s.name);
gets(s.name);
printf("enter per");
scanf("%f",&s.per);

printf(" \n roll =%d",s.roll);
printf(" \n nmae =%s",s.name);
printf(" \n post =%f",s.per);

*/
#include<stdio.h>
void main()
{

FILE *fp;
fp=fopen("university.txt","w");
fputc('r',fp);

printf("program is succesfull");

}



*/














