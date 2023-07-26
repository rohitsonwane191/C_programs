/*#include <stdio.h>
void main()
{
    int a[5], i, j, velue = 0;
    printf("enter the element of the arry");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                velue = a[j];
                a[j] = a[j + 1];
                a[j + 1] = velue;
              
            }
        }
printf("%d\n",a[j],a[j+1]);
        // velue=a[0]+a[4];
        // printf("%d",velue);
    }
}
*/
#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("enter the number of n");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <=40-i; j++)
        {
            printf(" ");

        }
        for ( k = 0; k <2*i; k++)
        {
            printf("%c",'a'+k);
        }
        printf("\n");
    }
        for ( i < n; i >=1; i--)
    {
        for ( j = 1; j <=40-i; j++)
        {
            printf(" ");

        }
        for ( k = 0; k <2*i-1; k++)
        {
            printf("%c",'a'+k);
        }
        printf("\n");
    }

    
}