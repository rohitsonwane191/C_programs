/*#include<stdio.h>
void main()
{
int i, j, k,n,m;
printf("enter the number");
scanf("%d",&n);
{
for ( i =n; i>=1; i--)
{ for ( j = i; j <40-i; j++)
{
    printf("");
}

for ( k=2*i-1; k>=i; k-=1)

{
    // for ( m =2; m <2*i-1; m+=2);



    printf("%d",k);
}
printf("\n");
}
}
}*/

#include<stdio.h>
void main()
{
    int i,b,j,k,m,n;
    printf("enter the number");
    scanf("%d",&n);
for ( i =1; i <=n; i++)
{
    for ( j = i; j <=40-i; j++)
    {
        printf("");
    }
    
        for ( b = 2*i-1; b >=i; b--)
    {
    for ( k =2*i-1; k >=b ; k-=1)
    {
    
        printf("%d",k);
    }
    
    }
    printf("\n");
}
}