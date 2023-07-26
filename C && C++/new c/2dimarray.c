// ----------------------------------------two dimarray only printng matrix form-------------------------------
// #include<stdio.h>
// void main()
// {
//     int a[2][3],i,j,s=0;
//     printf("enter the number");
//     for ( i = 0; i <2; i++)
//     {
//         for ( j = 0; j <3; j++)
//         {
//         scanf("%d",&a[i][j]);
//         }
        
//     }
//     printf("matrix is \n");
//     for ( i = 0; i <2; i++)
//     {
//         for ( j = 0; j <3; j++)
//         {

// printf("%d",a[i][j]);

//         }
//         printf("\n");
    

//     }
// }
// ---------------------------------------------two  dimaarray sum of element matrix form------------------------------------------
#include<stdio.h>
void main()
{
    int a[2][3],b[2][3],c[2][3],i,j;
    printf("enter the  first array element");
    for ( i = 0; i <2; i++)
    {
    for ( j = 0; j <3; j++)
    {
    scanf("%d",&a[i][j]);
    }}
    printf("enter the  secound array element");
    for ( i = 0; i <2; i++)
    {
    for ( j = 0; j <3; j++)
    {
    scanf("%d",&b[i][j]);
    }
    }
    for ( i = 0; i <2; i++)
    {
    for ( j = 0; j <3; j++)
    {
        c[i][j]=a[i][j]+b[i][j];
        printf("%d",c[i][j]);
    }
    printf("\n");
}
    }