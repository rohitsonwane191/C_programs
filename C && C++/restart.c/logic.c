
/*#include<stdio.h>
void  main()
{
char c;

printf("enter a charactter");
c=getch();
printf("\n %c is %d",c,c);
getch();

}*/
/*#include<stdio.h>
void main()
{
int X=77,y=10;
printf(" x is %d y is %d a+b is %d",X,y,X+y);

}*/
/*
#include<stdio.h>
void main()
    { int r;
    //float pi;
    printf("enter the r");
    scanf("%d",&r);
    //pi=3.14*r*r;
    printf("%f",3.14*r*r);

    }*/

// area of curcle

/*#include<stdio.h>
void main()
{
    int a,b,c;
    float d;
    printf("entere the tree number");
    scanf("%d%d%d",&a,&b,&c);
    d=(a+b+c)/3.0;
    printf("%f",d);

}*/
// only print of last number of given number

/*#include<stdio.h>
void main()
{
int a;
printf("ente rthe number ");
scanf("%d",&a);
printf("%d",a%10);
}*/
/*#include <stdio.h>
void main()
{
  int a, b;
  printf("enter the number of");
  scanf("%d\n%d", &a, &b);
                     a = a * b;
                     b = a /b;
                     a = a /b;


  printf("%d\n%d",a,b);
}*/
//  given number i s gretest
/*#include<stdio.h>
void main()
{
  int i,a[5],max;
  printf("emetr the elemet of ");
  for ( i = 0; i <= 4; i++)
  scanf("%d",&a[i]);
  max=a[0];
for ( i = 0; i <=4; i++)
{
  if (a[i]>max)

  max=a[i];
printf("maximum velue pof array %d\n",max);
}
}*/
// searching numbeer of the  given number
/*#include <stdio.h>
void main()
{
  int i, a[5], key, found = 1;
  printf(" enetr the elemnent of array =");
  for (i = 0; i <= 4; i++)
    scanf("%d", &a[i]);
  printf("enter the element  of saeching number =");
  scanf("%d", &key);
  for (i = 0; i <= 4; i++)
  {
    if (a[i] == key)
    {
      
      found = 2;
      break;
    }
  }
  if (found == 2)
    printf("\nelement fou");
  else
    printf("\n element not found ");
}
*/
#include<stdio.h>
int  main()
{
int i,j,a[5],temp;
printf("enetr the numnber ");
for ( i = 0; i <=4; i++)

scanf("%d",&a[i]);

for ( i = 0; i <= 4; i++)

{
    for ( j = 0; j<4-i; j++)

if (a[j]<a[j+1])

{

temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}

}
for ( i = 0; i <=4; i++)
printf("%d ",a[i]);


}


