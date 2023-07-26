#include<stdio.h>
int main()
{
FILE *pf;
char b,a,c;
pf=fopen("file.txt","w");
while(1)
{
c=fgetc(pf);
if(feof(pf))
{
    break;
}
printf("%c",c);

}





// scanf("%d%d",&a,&b);
// printf("%d%d",a+b);
fclose(pf);
return(0);



}