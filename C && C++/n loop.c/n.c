#include <stdio.h>
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

    printf("the finaly result is\n");
   for (i = 0; i <= 2; i++)
    {

        for (j = 0; j <= 2; j++)

            printf("%d", c[i][j]);
        printf("\n");
   }
     
}

/*
#include<stdio.h>
void main()
{
char num[20],nums1[20],i;
int l2,l1,l3;
printf("enter the number of string");
gets(num);
strcpy(nums1,num);
strrev(nums1);
//printf("enter the secound number ");
//gets(nums1);

strcmp(num,nums1);
printf("%d",num);

}*/  



