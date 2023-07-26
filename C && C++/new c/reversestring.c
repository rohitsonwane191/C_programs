#include<stdio.h>
#include<string.h>
void main()
{
int i,j,c=0;
char name[20],rname[20];
printf("enter the name");
scanf("%s",name);
for ( i = 0;name[i]!='\0'; i++)
{
    if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='0'||name[i]=='u')
    {
        c++;
    printf("%d",name[i]);
    }
    c==c+1;
}
j=0;
for ( j = 0; j<c; j++)
{
    rname[j]=name[i];
j--;
}
printf("\n%s",name);
printf("\n%s",rname);

}