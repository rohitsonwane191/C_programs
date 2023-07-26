/*#include<stdio.h>
int n,i,j,sum=0,pow;
int power( int n)
{
    for ( i = 1; i <=n; i++)
    {
        pow=i*i;
          printf(" power is [%d]=%d\n",i,pow);
     sum=sum+pow;
    }
        printf("  powe for sum number is %d\n",sum);
}
int main()
{
printf("ennter the end of number");
scanf("%d",&n);
power(n);
}
*/

/*
#include<stdio.h>
void perameter(int m)
{
for ( int i = m; i >=1; i--)
{
    for ( int k = i; k < 40-i; k++)
    {
        printf("");
    }
    
 for (int  j = i; j >=1; j--)
 {
    printf("%d",j);
 }
 printf("\n");
}
}
int main()
{
int n;
    printf("enter the size of peramet");
    scanf("%d",&n);
    perameter(n);
}
*/
 /*  
  #include<stdio.h>
   
   int  display( int *x)
   {
*x=*x+100;
   }
   
   int  main()
   { int a;

printf("enter the number of a");
scanf("%d",&a);
display(&a);
printf("%d",a);
}
*/
/*#include<stdio.h>
int *sum=0;
int show( int *x)
{
    int i;
for (   i = 1; i <*x; i++)
{
    printf("%d",i);
    //  *sum=*sum+i;
}
}

int main()
{    int a;

printf("enter value of a");
scanf("%d",&a);
show(&a);
printf("%d\n ",a);
}*/
/**/
/*#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100];
printf("enter the chractor first");
gets(str1);
printf("enter the charactor secound");
gets(str2);
 if(strcmp(str1,str2)==0)
printf("chyarater is equal");
else 
printf("not same");
}
*/
/*
#include<iostream>
using namespace std;
void student()
{
cout<<"not argument\n 8";    
    }
    void student(int i)
    {
        cout<<i<<endl;
    }
void student( double j,double h)
{

    cout<<j+h<<endl;
}
void student( int g,int k)
{
    cout<<g*k<<endl;
}

int main()
{
student();
student(5);
student(5.6,4.6);
student(5,8);

}
*/
#include<iostream>
using namespace std;
class area_defind
{
public:
void area( double h,double j)
{
cout<<"area of tringle"<<(h*j)/2<<endl;
}
public: 
void area(double pi,int r)
{cout<<"area of cirle"<<pi*r*r<<endl;
}
public:
void area(int d,double pi,int r)
{
cout<<"area of con"<<d*pi*r;

}


};
int main()
{
    class area_defind ob;
    ob.area(8.6,5.6);
    ob.area(3.14,5);
    ob.area(3,3.14,5);
}























