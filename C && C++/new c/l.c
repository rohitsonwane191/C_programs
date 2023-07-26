#include<stdio.h>
void main()

{
    int i,j,a[6],temp;
    printf("enter the element ");
    for ( i = 0; i <=5; i++)
    {
        scanf("%d",&a[i]);
    }
for ( i = 0; i <=5; i++)
{
    for ( j = 0; j <=5-i; j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
        }
    }
    
}
printf(" after descading ordere element of the order\n");
for ( i = 5; i >=0; i--)
{
printf("%d\n",a[i]);
}

    
}