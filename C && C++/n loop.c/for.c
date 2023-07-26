// fo r loop
/*#include<stdio.h>
void main()
{int n,i,table;
printf("enetr the number of n");
scanf("%d",&n);

for ( i = 1; i <= 10; i++){
table=n*i;

printf("%d",table);}
}
*/
/*#include <stdio.h>
void main()
{
    int n, i, j;
    printf("enter the numebr of n");
        scanf("%d", &n);


    for (i = 1; i < n; i += 2)

        printf(" odd number is=%d\n ", i);
}*/

/*#include <stdio.h>
void main()
{
    int n, i;
    printf("enter the numebr of n");
        scanf("%d", &n);


    for (i = 0; i < n; i += 2)

        printf(" even number is=%d\n ",i); }*/
/*#include <stdio.h>
void main()
{
    int i, j, n;
    printf("enter the number of n");
    scanf("%d", &n);
    for (i = 1, j = 0; i < n, j < n - 1; i++, j++)

        printf("%d\n%d--", i, j);
}
*/
#include <stdio.h>
void main()
{
    int i, j, colam;
    printf("Enter the rows");
    scanf("%d", &colam);

    for (i =colam; i>=1; i--)
    {
        for (j = 1; j <= colam - i; j++)
        {
            printf(" ");
        }
        for (int k = 2*i-1; k >=1; k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}




// #include <stdio.h>
// void main()
// {
//     int i, j, a[3][3] = {{5, 8, 11}, {99, 25, 66}, {44, 555, 999}};
//     for (i = 0; i <= 2; i++)
//     {

//         for (j = 0; j <= 2; j++)
//         {
//             if (i<=j)

//                 printf("%d", a[i][j]);

//             else
//                 printf("0");
//         }

//         printf("\n");
//     }
// }
