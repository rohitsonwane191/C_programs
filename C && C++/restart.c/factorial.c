/*#include<stdio.h>
void main(){

long int  n,i,fact=1;
printf("enter the number ");
scanf("%d",&n);
for ( i = n; i >=1; i--)
{
    fact=fact*i;
}
printf("%d",fact);
}*/

#include <stdio.h>
void main()
{
    int i, j,  n;
    char k;
    printf("enter the nuber of peramit");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 'a'; j <= 'z'; j++)
        {
            printf(" %c",j);
        }
        for (k = 1; k <= 2*i-1; k++)
        {
            // for(int l='a';l<='z';l++){
            printf("  ");
        }
        printf("\n");
    }
}