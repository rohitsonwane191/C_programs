/*#include<stdio.h>
void main()
{
 long int a[5],i,max;
printf("enter the number ");
for ( i = 0; i <4; i++)
scanf("%d",&a[i]);
max=a[0];
for ( i = 0; i <4; i++)
{
    if(a[i]>max){
max=a[i];
printf("maximuym number is %dl\n",max);
}

}
}*/

#include <stdio.h>
void main()
{
    int a[5], i, j, velue;
    printf("enter the element of the arry");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j <= 4 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                velue = a[j];
                a[j] = a[j + 1];
                a[j + 1] = velue;
            }
        }
    }
    for ( i = 0; i <=4; i++)
    {
        /* code */
    
    
            printf("%d", a[j]);
}}

