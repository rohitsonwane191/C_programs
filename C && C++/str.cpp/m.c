#include<stdio.h>
#include<stdlib.h>
struct student
{
int roll,i,j,total,marks[5],s;
char name[100];
double per;
}s1,s2;
void input()
{
int i;
    printf("enter the name ");
    scanf("%s",s1.name);
    printf("enter the roll number");
    scanf("%d",&s1.roll);
    printf("enter the marks");
    for ( int i = 0; i <5; i++)
    {
    scanf("%d",&s1.marks[i]); 
    s1.total=s1.marks[0]+s1.marks[1]+s1.marks[2]+s1.marks[3]+s1.marks[4];
    s1.per=(s1.marks[0]+s1.marks[1]+s1.marks[2]+s1.marks[3]+s1.marks[4])/5;
       
       }
    
    scanf("%s",s1.name);
    printf("enter the roll number");
    scanf("%d",&s2.roll);
    printf("enter the marks");
    for ( int i = 0; i <5; i++)
    {
    scanf("%d",&s2.marks[i]); 
    s2.total=s2.marks[0]+s2.marks[1]+s2.marks[2]+s2.marks[3]+s2.marks[4];
    s2.per=(s2.marks[0]+s2.marks[1]+s2.marks[2]+s2.marks[3]+s2.marks[4])/5;

    }    

}


void oputput()
{ int i;
printf("the name of student\t roll number\t\t\ttotal\t\tpersantage");
printf("\n%s\t\t\t\t%d\t\t\t%d\t\t%f",s1.name,s1.roll,s1.total,s1.per);

printf("\n%s\t\t\t\t%d\t\t\t%d\t\t%f",s2.name,s2.roll,s2.total,s2.per);
// printf("\n the roll number is =%d",s1.roll);
// printf("\n name of%s",s2.name);
// printf("\n the roll number is =%d",s2.roll);


}


void main()
{
input();
oputput();
}