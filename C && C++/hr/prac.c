#include<stdio.h>
void main ()
{
   int n,i,j;
  // printf("enter the number");
  // scanf("%d",&n);

   for(i=2;i<=1000;i++)
   {
      for(j=2;j<=1000;j++)
      {
         if(i%j==0)
           break;

      }
       if(i==j)
         printf("%d ",i);

   }
}



#include<stdio.h>
void main ()
{
   int n,i,a,b,c;
   a=0;
   b=1;
   printf("enter the number");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {
       printf("%d ",a);
       c=a+b;
       a=b;
       b=c;
   }
}


#include<stdio.h>
void main()
{
   int n,fact=1,i;
   printf("enter the number");
   scanf("%d",&n);

   for(i=n;i>=1;i--)
   fact=fact*i;
   printf("%d ",fact);
}


#include<stdio.h>
void main ()
{
   int n,r,sum=0;
   printf("enter the number");
   scanf("%d",&n);

   while(n!=0)
   {
      r=n%10;
      n=n/10;

      sum=sum+r;

   }
      printf("%d",sum); 
}

#include<stdio.h>
void main ()
{
  int i,n;
   printf("enter the number");
   scanf("%d",&n);

   for(i=1;i<=10;i++)
   printf("\n%d * %d=%d ",n,i,n*i);
  
}


#include<stdio.h>
void main ()
{
   int i,n,sum=0;
  
    printf("enter the number");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
    sum=sum+i/1;
   printf("%d",sum);
}


#include<stdio.h>
void main ()
{
   int i,n;
   printf("enter the number");
   scanf("%d",&n);
   for(i=2;i<=n*2;i+=2)
   printf("%d",i);
}


#include<stdio.h>
void main ()
{
   int i,j;
   for(i=1;i<=3;i++)
   {
      for(j=1;j<=2*i-1;j++)
      printf("*");
      printf("\n");
   }
}

  


#include<stdio.h>
void main ()
{
   int i,j;
   for(i=5;i>=1;i--)
   {
      for(j=5;j>=i;j--)
      printf("%d",j);
      printf("\n\n");
   }
}


#include<stdio.h>
void main()
{
   int i,j;
   for(i=8;i>=1;i--)
   {
      if(i%2==0)
      {for(j=1;j<=i;j++)
      printf("%d",j);
      printf("\n\n");}

      else 
      {for(j=i;j>=1;j--)
      printf("%d",j);
      printf("\n");}
   }
}

#include<stdio.h>
void main()
{
   int i=1,a=0,b=1,c=1,x;
   while(i<=6)
   {
       if(i>2)
       {
        a=a+b+c;
        i++;
        c++;
       for(x=1;x<=a;x++)
        printf("*");
        printf("\n");
       }

        else
        { a=a+b;
        i++;
        for(x=1;x<=a;x++)
        printf("*");
        printf("\n");
        }
   }
}



#include<stdio.h>
int factorial(int n)
{
  int fact=1,i;
  for(i=n;i>=1;i--)
  fact=fact*i;

  return fact;
}

void main ()
{
  int num;
  printf("enter the number");
  scanf("%d",&num);

  printf("%d",factorial(num));
}


   // PRIME NUMBER
#include<stdio.h>
int checkprime(int n)
{
   int i,count=0;
   for(i=1;i<=n-1;i++)
   {
      if(n%i==0)
      count++;
   }
   return (count);
}

void main ()
{
   int num,n;
  printf("enter the number");
  scanf("%d",&num);

  n=checkprime(num);
 
  if(n==1)
  printf("\n prime number");

  else
  printf("\n not a Prime number");
}


#include<stdio.h>
void main ()
{
   int a[6],i;
   for(i=0;i<=5;i++)
   scanf("%d",&a[i]);
   
   for(i=5;i>=0;i--)
   printf("%d ",a[i]);
}


#include<stdio.h>
void main ()
{
   int a[6],i,j,temp;

   for(i=0;i<=5;i++)
   scanf("%d",&a[i]);

   for(i=0;i<=5;i++)
   {
      for(j=0;j<5-i;j++)
      {
         if(a[j] > a[j+1])
         {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
         }
      }
   }
   for(i=5;i>=0;i--)
   printf("%d",a[i]);
}



#include<stdio.h>
void main ()
{
   int a[6],i,j,max;

   for(i=0;i<=5;i++)
   scanf("%d",&a[i]);

   max=a[0];

   for(i=0;i<=5;i++)
   {
      if(max < a[i])
      max=a[i];
   }
   printf("%d",max);
}



#include<stdio.h>
void main ()
{
   int a[3][3],b[3][3],c[3][3];
   int i,j,k;

   for(i=0;i<=2;i++)
   for(j=0;j<=2;j++)
   scanf("%d",&a[i][j]);

   for(i=0;i<=2;i++)
   for(j=0;j<=2;j++)
   scanf("%d",&b[i][j]);

   for(i=0;i<=2;i++)
   {
   for(j=0;j<=2;j++)
   {
      c[i][j]=0;
   for(k=0;k<=2;k++)
   c[i][j]=c[i][j]+a[i][k]*b[k][i];
   }
   }

   for(i=0;i<=2;i++)
   {for(j=0;j<=2;j++)
   printf("%d",c[i][j]);
   
   printf("\n");}
}


