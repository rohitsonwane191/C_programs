/*#include<stdio.h>
#include<stdlib.h>
void main()
{

int *p,max=0;
p=(int *)malloc (sizeof (int));
*p=10;
*p=*p+100;
printf("%d",*p);
free(p);
printf("\n%d",*p);
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
void main()
{

int *p;
printf("hello wold");
printf("\n wlcome to program");
p=(int *)calloc(5,sizeof (int));
for (int  i = 0; i <4; i++)
{
    scanf("%d",&p[i]);
}
for (int  i = 0; i <4; i++)

printf("\n value of dynamic variable=%d",p[i]);
free(p);
for (int  i = 0; i <4; i++)
printf(" show address is= %d",p[i]);
printf("\n program is still runing");
printf("\nend of the of the program");
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
void main()
{
int *p,max=0,min=0,i,temp;
p=(int*)calloc(5,sizeof(int));
for ( i = 0; i <5; i++)
{printf("enter the element of he array");
scanf(" %d",&p[i]);
}
max=p[0];
for ( i = 0; i <5;i++){
if (max<p[i])
{max=p[i];
}}
printf("maximum element of the array %d\n",max);
min=p[0];
for ( i = 0; i <5;i++){
if (min>p[i])
{min=p[i];
}}
printf(" minimum element of the array %d\n",min);
}*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,*p,max=0,min=0,temp,n,s;
printf("enter the element of the array");
scanf("%d",&n);{
p=(int*)calloc(n,sizeof(int));
for ( i = 0; i <n; i++)
{
    scanf("%d",&p[i]);
}

    max=p[0];
for ( i = 0; i <n; i++)
{
if(max<p[i])
max=p[i];
 }s=p[i];
printf("the maximum elemenet of thr array is =%d",max);}
 int *p1,m;
 printf("enetr the new number");
 scanf("%d",&m);
 p1=(int*)realloc(p,m*sizeof(int));
 if(n>m){
 for ( i =p[n-1]; i <m; i++)
 {
    scanf("%d",&p[i]);
 }
     max=p1[0];
for ( i = 0; i <m; i++)
{
if(max<p1[i])
max=p1[i];
 }

 printf("the last elemenet of the array is=%d\n",max);
 }
 else
 
 for ( i =0; i <m; i++)
 {
    scanf("%d",&p[i]);
 }
     max=p1[0];
for ( i = 0; i <m; i++)
{
if(max>p1[i])
max=p1[i];
 }
printf(" minimum value is =%d",max);
}

