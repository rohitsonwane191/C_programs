#include<stdio.h>
void main()
{
int m1,m2,m3, total;
float per;
printf("enter the number of m1,m2,m3");
scanf("%d%d%d",&m1,&m2,&m3);
total=m1+m2+m3;
per=(total*100)/100;
printf("total=%d\n per=%2f",total,per);
}