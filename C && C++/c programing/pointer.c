#include<stdio.h>
void fun(int f,int s,int g);
int mai()
{
int w,r,t;
printf("enter the number ");
scanf("%d%d%d",&w,&r,&t);
fun(&w,&r,&t);
}
void fun(int f,int s,int g)
{
int k;
k=f+s+g;
printf("%d",s);


}






















