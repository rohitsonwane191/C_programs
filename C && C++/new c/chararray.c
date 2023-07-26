// #include<stdio.h>
// void main()
// {
// char a[50],i,s=0;
// printf("enter the name ");
// scanf("%s",a);
// for ( i =0; a[i]!='\0'; i++)
// {
//     printf("%s",a[i]);
//     s++;
// printf("%d",s);
// }

// }
#include<stdio.h>
void main()
{
    char name[200];
    int count=0,i;
    printf("enter the name");
    scanf("%s",name);
for ( i = 0; name[i]!='\0'; i++)
{
    if(name=='a'||name=='e'||name=='i'||name=='o'||name=='u')
    {
printf("%s",name[i]);
    }
    count++;


}
    printf(" name is %s\n",name);
printf(" alphabate is=%d",count);

}