#include<stdio.h>
int  main()
{
int n[4][2],i,j;
printf("enter thearraty");
for ( i = 0; i <=3; i++)
for ( j = 0; j <=1; j++)
scanf("%d",&n[i][j]);
for ( i = 0; i <=1; i++)
 {
for ( j = 0; j <=3; j++)
printf("%d",n[j][i]);
printf("\n");
}
for ( i = 0; i <=3; i++) {
for ( j = 0; j <=1; j++)
printf("%d",n[i][j]);
printf("\n");}
printf("\n");

return 0;

}/*

#include<stdio.h>
void main()
{int a[3][3],b[3][3],c[3][3],i,j;
printf("enter the element");
for ( i = 0; i <=2; i++)
for ( j = 0; j <=2; j++)
{
scanf("%d",&a[i][j]);
}
for ( i = 0; i <=2; i++)
for ( j = 0; j <=2; j++)
{
scanf("%d",&b[i][j]);
}
for ( i = 0; i <=2; i++)
for ( j = 0; j <=2; j++)
c[i][j]=a[i][j]+a[i][j];
for ( i = 0; i <=2; i++){
for ( j = 0; j <=2; j++)
printf("%d",c[i][j]);
printf("\n");}
}
*/