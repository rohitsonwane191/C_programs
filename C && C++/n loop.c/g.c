/*#include <stdio.h>
void main()
{
    int a[3][3], b[3][3], c[3][3], i, j;
    printf("ente rthe 1st array ");
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 2; j++)
            scanf("%d", &a[i][j]);

    printf("ente rthe 2nd array ");
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 2; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 2; j++)
            c[i][j] = a[i][j] + b[i][j];
    for (i = 0; i <= 2; i++)
    {
        printf("the finaly result is\n ");
        for (i = 0; i <= 2; i++)
        {
            for (j = 0; j <= 2; j++)

                printf("%d", c[i][j]);
            printf("\n");
        }
    }
}*/

#include <stdio.h>
void main()
{
    int i, j, a[3][3] = {{1, 2, 3}, {2, 8, 6}, {4, 5, 9}};
    for (i = 0; i <= 2; i++)
    {

        for (j = 0; j <= 2; j++)
        {
            if (i == j)%d", a[i][j]);

            else
                printf(" ");
        }

        printf("\n");
    }
}
