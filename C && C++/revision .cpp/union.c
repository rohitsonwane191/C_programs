
#include<stdio.h>
#include<string.h>
union name
{

    int id;
    char name[30],anme[20];
} us;

void main()
{
printf("enter the id");
scanf("%d",&us.anme);
printf("enter the name");
scanf("%s",us.name);
printf("%d\n",us.id);
printf("%s",us.name);
}
