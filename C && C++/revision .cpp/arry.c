#include <stdio.h>
#include <conio.h>
void main()
{
    int i, size, max = 0, min = 0;
    printf("enter the array");
    scanf("%d", &size);
    int a[size];
    printf("enter the number in array \n");
    for (i = 0; i<=size-1; i++)
        scanf("%d", &a[i]);

max=a[0];
min=a[0];
for ( i = 0; i <=size-1; i++)
{
    if(a[i]>max)
    {
        max=a[i];
    }
    if(a[i]<min)
    {
        min=a[i];
    }
}
printf("maximum numvber is =%d",max);
printf("minimum numvber is =%d",min);

}

#/*include<stdio.h>
void main()
{
int i,j,n;
printf("enter the number ");
scanf("%d",&n);
j=n%10;
int k=n/2;
printf("%d\n%d",j,k);
}*/