#include<stdio.h>
#include<string.h>
// #include<string.h>
int main()
{
char ch[]={"greting of the day"},name[100];
int a,b,n,table=0;
FILE*ptr;
ptr=fopen("rohit.txt","w");
printf("enter the name ");
scanf("%s",name);
printf("enter the age");
scanf("%d",&n);
for ( int i = 1; i <=10; i++)
{
    table=i*i;
fprintf(ptr," table is :%d\n",table);
}
scanf("  %d  %d",&a,&b);
fprintf(ptr,"name is :%s\n",name);
fprintf(ptr,"age is =%d\n sum of given number :%d",n,a+b);

fclose(ptr);
}


