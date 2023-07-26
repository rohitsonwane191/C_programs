#include<stdio.h>
void main()
{

int hindi,maths,english,science,total;
float per;
printf("enter the marks of given subjects");
scanf("%d%d%d%d",&hindi,&maths,&english,&science);
total=hindi+english+maths+science;
per=total/4;
printf("%d\n",total);
printf("%f\n",per);
if(per>30)
{
    if(per>30&&per<50)
    {
        printf("c great\n");
    }
    if(per>50&&per<70)
    {
        printf("b great\n");
    }if(per>70&&per<100)
    {
        printf("a great\n");
    }}
    else 
    {
    printf("fail");
    }
}


