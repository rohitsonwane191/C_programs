
// string function of strlen(),strcopy(),strcapt(),end etc;
/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char name[60];
int  j,p;
printf("enter the name ");
gets(name);
strrev(name);
p=strlen(name);
printf("%s\n lenth is =%d",name,p);
}
*/
/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char name[60],s[60];
int roll[40];
printf("enter the name ");
gets(name);
printf("enter theroll number");
scanf("%s",roll);
printf("%s\n",name);
strcpy(s,name);
printf("%s",s);
}
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
   int i, j, count = 0;
   char ch[100];
   printf("enter the chtor");
      gets(ch);
   for (i = 0; i <= ch[i]; i++)
   {
      if (ch[i] >= 'a' && ch[i] <= 'z')
         if (ch[i] == 'a' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'e')
         {
            j = strlen(ch);
            count++;
         }
      ch[i] = ch[i] - 32;
   }
   puts(ch);
   printf(" total charctor is =%d\n ", ch);
   printf(" total charctor is =%d\n ", j);
   printf(" consonant caharctor is =%d\n ", j - count);
   printf("vowel charactor is =%d\n ", count);
}

/*
#include<stdio.h>
#include<stdlib.h>
void main(){
int a,b,sum=0;
printf("enter the numberof a and b");
scanf("%d%d",&a,&b);
if(a>0||b>0)
exit(0);
sum=a+b;
printf("%d",sum);
}*/
/*#include<stdio.h>
#include<string.h>
void main()
{
  char a[200],b[200];
gets(a);
gets(b);
// puts(a);
// puts(b);
strcmp(a,b);
// puts(a);

}*/
