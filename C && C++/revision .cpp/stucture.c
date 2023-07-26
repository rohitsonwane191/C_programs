/*#include<stdio.h>
#include<string.h>
struct student
{
int i,name[40];





}st;
struct st;
int main()
{
    printf("enter the id");
    scanf("%d",&st.i);
printf("%d",st.i);

}*/
#include<stdio.h>
#include<string.h>
// static name="govt hiyer secoundry school barwani";
struct student
{ 
 int roll,marks[5],total;
float per;
char name[200];
}st[2];
void main()
{
int i,j;
for ( i = 0; i <2; i++)
{ printf("enter the enmploee id ");
scanf("%d",&st[i].roll);
printf("enter the name ");
scanf("%s",&st[i].name);
for ( j = 0; j <6; j++)
{
scanf("%d",&st[i].marks);
}
}
for ( i = 0; i <2; i++)
{
printf("%d",st[i].roll);
printf("%s\n",st[i].name);
}
for ( i = 0; i <2; i++)
{
for ( j = 0; j <6; j++)
{
    printf("%d\n",st[i].marks[j]);
}}
}

