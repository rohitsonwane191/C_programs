#include<stdio.h>
int main()
{
int n;
char *name;
FILE *ptr;
if ((ptr=fopen("rohit.txt","r"))==NULL)
{
printf("error ! file is not avalable");
exit(1);
}
fscanf(ptr,"%d%s",&n,name);
printf("name is :%s\n",name);
printf("age  is :% d",n);
fclose(ptr);
return 0;

}