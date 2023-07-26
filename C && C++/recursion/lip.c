// #include<stdio.h>
// void main()
// {
//     int n;
//     printf("enter the number");
//     scanf("%d",&n);
//     if(n%400==0)
//     {
//         printf("is lip yaer");}
//         else if(n%100==0){
//         printf("lip year");}
//          else if(n%4==0){
//         printf("lip year");}
//         else
//         printf("not lip year");
// }

#include<stdio.h>
void main()
{

    int  i,j,n,k;
    printf("enter the number");
    scanf("%d",&n);
    for ( i = 1; i<=n; i++)
    {    
    for ( j = i; j<=2*i-1; j++)
    {
        printf("%d",j);
    }
    printf("\n");
    }
    }
    

