/*#include<stdio.h>
void main()
{

int a[4][2],b[2][4],i,j;
printf("enter the number of array");
for ( i = 0; i <4; i++)
{for ( j = 0; j <2; j++)
{
    scanf("%d",&a[i][j]);
}
}
for ( i = 0; i <2; i++)
{for ( j = 0; j <4; j++)

printf("%d",a[j][i]);
printf("\n");
}
printf("is =\n");
for ( i = 0; i <4; i++)
{for ( j = 0; j <2; j++)

printf("%d",a[i][j]);
printf("\n");
}
}
*/
#include<stdio.h>
void main()
{
int i,j,k,n;
printf("enter the number of element ");
scanf("%d",&n);
for ( i = 1; i <=n; i++)
{
    for ( j = 1; j <40-i; ++j)
    {
        printf(" ");
    }
    
    for ( k = 1; k <=2*n-i-n-3; k++)
    {
        printf("*");
    }
    for ( k = 1; k <=2*i-1; k++)
    {
        printf("*");
    }
    printf("\n");
}

}