
// sum of 2d array
/*
#include<stdio.h>
void main()
{
int i,j,a[3][3],b[3][3],c[3][3];
printf("enter 2d array ");
for ( i = 0; i <= 2; i++)
for ( j = 0; j <= 2; j++)
scanf("%d",&a[i][j]);

for ( i = 0; i <= 2; i++)
for ( j = 0; j <= 2; j++)
scanf("%d",&b[i][j]);

for ( i = 0; i <= 2; i++)
for ( j = 0; j <= 2; j++)
c[i][j]=a[i][j]+b[i][j];
printf(" result is\n");

for ( i = 0; i <= 2; i++)
{
for ( j = 0; j <= 2; j++)
printf("%d",c[i][j]);
printf("\n");
}
}*/
/*#include<stdio.h>
void main()
{

    int i,j,a[2][4];
    printf("enter the rows");
    for ( i = 0; i <=1; i++)
    for ( j = 0; j <=3; j++)

    scanf("%d",&a[i][j]);;


   for ( i = 0; i <=1; i++)
   {
    for ( j = 0; j <=3; j++)

   printf("%d",a[i][j]);
   printf("\n");
   }
 }
*/
/*#include<stdio.h>
void main()
{
int i,j,a[3][4],b[3][4],c[3][4];
printf("enter the first rows and colum\n");
for ( i = 0; i <=2; i++)
for ( j = 0; j <=3; j++)
scanf("%d",&a[i][j]);
printf("enter the secound rows and colum\n");
for ( i = 0; i <=2; i++)
for ( j = 0; j <=3; j++)
scanf("%d",&b[i][j]);
for ( i = 0; i <=2; i++)
for ( j = 0; j <=3; j++)
c[i][j]=a[i][j]+b[i][j];
for ( i = 0; i <=2; i++){
for ( j = 0; j <=3; j++)

printf("%d ",c[i][j]);
printf("\n");
}
}*/
// sorting
/*
#include <stdio.h>
void main()
{
    int i, j, a[5], temp = 0;
    printf("enter the element of array");
    for (i = 0; i < 5; i++)
    {
	   scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
	   for (j = i; j < 5 - i; j++)
	   {
		  if (a[j] > a[j + 1])
		  {
			 temp = a[j];
			 a[j] = a[j + 1];
			 a[j + 1] = temp;
		  }
	   }
	   for (i = 0; i < 5; i++)

		  printf("%d", a[i]);
    }
}
*/
/*#include<stdio.h>
void main()
{
	long int i,j,n,min=0,max=0;
    printf("enter the number of array ");
    scanf("%d",&n);
    int a[n];
    printf("enter the array");
    for ( i = 0; i <n; i++)
    {
scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for ( i = 0; i <n; i++){
    if(a[i]>max)
    {
    max=a[i];
    }
 if (a[i]<min){
min=a[i];
 }
   // for ( i = 0; i <n; i++)
    }
printf("the maximum velue is =%d",max);
printf("the minimum velue is =%d",min);

}*/
/*
#include<stdio.h>
void main()
{
int n,i,j,key,found;
printf("enter the number of array");
scanf("%d",&n);
int a[n];
for ( i = 0; i <n; i++)
{
scanf("%d",&a[i]);
}
printf("enter the key");
scanf("%d",&key);
for ( i = 0; i < n; i++)
{


if(a[i]==key){
    found=1;
    break;
}}
if(found==1)
printf("element found");
else
printf("element not found");

}*/

