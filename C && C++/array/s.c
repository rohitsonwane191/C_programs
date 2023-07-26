#include<stdio.h>
int main()
{ char i;
 char j,k,r;
printf("enter rows");
scanf("%d",&r);
for(i='a';i<='z';i++){
    for ( j = 1; j < 40-i; j++)
       printf(" ");
    for ( k = 1; k <= 2*i-1; k++)
    {
        printf("%d",i);
    }
    printf("\n");
}
 for ( int l = 'z'; l >='a'; l--)
 {
    for (int m = 1; m <40-l; m++)
    {
printf(" ");
    }
    for (int n = 1; n <= 2*l-1; n++)
    {
        printf("%d",l);
    }
    printf("\n");
    
 }
 
}