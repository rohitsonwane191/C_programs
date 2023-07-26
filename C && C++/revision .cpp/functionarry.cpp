/*#include<stdio.h>
#include<conio.h>
void user(int A[])
{
int sum=0,i;
for ( i = 0; i <=4; i++)
{
    sum=sum+A[i];
}
printf("%d",sum);


}
int main()
{
int A[5],i;
printf("enter the arry");
for ( i = 0; i <=4; i++)
{
scanf("%d",&A[i]);
}
user(A);

}*/

/*#include<stdio.h>
void display(int a[7] )
{ int key,found;

printf("enter the key");
scanf("%d",&key);

for (int j = 0; j <6; j++)
{


if(key==a[j])
found=0;
break;}
if(found==0)
printf("element  found\n");
else
printf("element  no found\n");

}

int main()
{
int i,a[7];
printf("enter the array");
for ( i = 0; i <6; i++)
{
     scanf("%d",&a[i]);
}



display(a);

}
*/

/*#include<iostream>
using namespace std;
int main()
{
int table[4][4],i,j;
cout<<"enter the array";
for ( i = 0; i <3; i++)
{
    cin>>table[i][i];
}
for ( i = 0; i <3; i++)
{
cout<<table;
}


}
*/

/*#include <stdio.h>
void display(int n[])
{
    int i;
    for (i = 0; i <= 6; i++)
    {

        printf("%d", n[i]);
    }
}
int main()
{
    int i, j, n[7];
    printf("enter the number of array");
    for (i = 0; i <= 6; i++)
    {

        scanf("%d", &n[i]);
    }

    display(n);
}*/
