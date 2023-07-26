#include<stdio.h>
void main()
{

int i,j,n[5],temp=0;
printf("enter the element");
for ( i = 0; i <5; i++)
{
    scanf("%d",&n[i]);

}
for ( i = 0; i <5; i++)
{
    for ( j = 0; j <5-i; j++)
    {
        if(n[j]<n[j+1])
        {
            temp=n[j+1];
            n[j+1]=n[j];
            n[j]=temp;
        }
    }
    
}
for ( i = 0; i <5; i++)
{
printf("%d",n[i]);
}


}