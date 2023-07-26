// ------------------------------------fctorial(wee2-1)---------------------------------------------
// #include<stdio.h>
// void main()
// {
//    int i,n,fact=1;
//    printf("enter the number");
//    scanf("%d",&n);
//    for ( i = n; i >=1; i--)
//    {
//       fact=fact*i;
//    }
//       printf("%d\n",fact);
   
// }
// // ----------------------------------------------table(week2-2)-----------------------------------------------------
// #include<stdio.h>
// void main()
// {
//    int i,n,table;
//    printf("enter the number");
//    scanf("%d",&n);
//    for ( i = 1; i <=10; i++)
//    {
//       table=n*i;
//       printf("%d\n",table);
//    }
   
// }


// --------------------------------------prime (1-1000) -----------------------------------------------------
// #include<stdio.h>
// void main ()
// {
//    int n,i,j;
//   // printf("enter the number");
//   // scanf("%d",&n);

//    for(i=2;i<=1000;i++)
//    {
//       for(j=2;j<=1000;j++)
//       {
//          if(i%j==0)
//            break;

//       }
//        if(i==j)
//          printf("%d ",i);

//    }
// }

// -------------------------------------------fibonacci resies(week 2-3)-------------------------------------------

#include<stdio.h>
void main ()
{
   int n,i,a,b,c;
   a=0;
   b=1;
   printf("enter the number");
   // scanf("%d",&n);

   for(i=1;i<=10;i++)
   {
       printf("%d ",a);
       c=a+b;
       a=b;
       b=c;
   }
}


// ---------------------------------------------factorial (week 2-1)---------------------------------------
// #include<stdio.h>
// void main()
// {
//    int n,fact=1,i;
//    printf("enter the number");
//    scanf("%d",&n);

//    for(i=n;i>=1;i--)
//    fact=fact*i;
//    printf("%d ",fact);
// }

// // ------------------------------sum of digits number (week 2-4)---------------------------------------
// #include<stdio.h>
// void main ()
// {
//    int n,r,sum=0;
//    printf("enter the number");
//    scanf("%d",&n);

//    while(n!=0)
//    {
//       r=n%10;
//       n=n/10;

//       sum=sum+r;

//    }
//       printf("%d",sum); 
// }
// ------------------------------------table(week2-2) --------------------------------------
// #include<stdio.h>
// void main()
// {
//   int i,n;
//    printf("enter the number");
//    scanf("%d",&n);

//    for(i=1;i<=1000;i++)
//    printf("\n%d * %d=%d ",n,i,n*i);
  
// }
// // --------------------------------sum of series (week 2-5)-------------------------------------------

// #include<stdio.h>
// void main ()
// {
//    int i,n,sum=0;
  
//     printf("enter the number");
//    scanf("%d",&n);

//    for(i=1;i<=n;i++)
//     sum=sum+i/1;
//    printf("%d",sum);
// }

// // ----------------------------------------------sum of first 10 even number--------------------------------
// #include<stdio.h>
// void main ()
// {
//    int i,n,sum=0;   
//    printf("enter the number");
//    scanf("%d",&n);
//    for(i=2;i<=n*2;i+=2)
// {sum=sum+i;
//    printf("%d\n",sum);
// }
// }
// // ---------------------------------------peramit 1------------------------------------------------------------

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

  
// // -------------------------------------------------------peramit 2-----------------------------------------------------


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

// // -------------------------------------------------------peramit 4-----------------------------------------------------
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
// // ----------------------------------------peramit 3-----------------------------------------------
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
        printf("\n\n");
       }
        else
        { a=a+b;
        i++;  
        for(x=1;x<=a;x++)
        printf("*");
        printf("\n\n");
        }
   }
}
// ---------------------------------peramit-5-------------------------------

#include<stdio.h>
void main()
{
   int i,j;
   for ( i = 1; i <=5; i++)
   {
      for ( j = i; j<2*i;j++)
      {
         printf("*");
      }
      printf("\n");
   }  
}
// -------------------------------------------------------factorial using function(week 2-10) ------------------------------------------
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


//    // -----------------------------------------------PRIME NUMBER using function with arrgument(week 2-11)-------------------------------
// #include<stdio.h>
// int checkprime(int n)
// {
//    int i,count=0;
//    for(i=1;i<=n-1;i++)
//    {
//       if(n%i==0)
//       count++;
//    }
//    return (count);
// }

// void main ()
// {
//    int num,n;
//   printf("enter the number");
//   scanf("%d",&num);

//   n=checkprime(num);
 
//   if(n==1)
//   printf("\n prime number");

//   else
//   printf("\n not a Prime number");
// }
  
// // ------------------------------------------------reverse elent in array(week 2-12)-----------------------------------
// #include<stdio.h>
// void main ()
// {
//    int a[6],i;
//    for(i=0;i<=5;i++)
//    scanf("%d",&a[i]);
   
//    for(i=5;i>=0;i--)
//    printf("%d ",a[i]);
// }

// // ------------------------------------------short array in descending order(week 2-13)-------------------------------
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


// // -----------------------------------------------------maximum element in arrY---------------------------------
#include<stdio.h>
void main ()
{
   int a[6],i,j,max=1;

   for(i=0;i<=5;i++){
   scanf("%d",&a[i]);
}
   max=a[0];

   for(i=0;i<=5;i++)
   {
      if(max > a[i])
      
      max=a[i];
   
   }
   // for ( i = 0; i <=5; i++)
   // {
   // }
   printf("%d",max);
   
}
//  ----------------------------------ADDITION of 3*3 using 2d array method------------------------------------

#include<stdio.h>
void main ()
{
   int a[3][3],b[3][3],c[3][3];
   int i,j,k;
printf("enter the first array");
   for(i=0;i<=2;i++)
   for(j=0;j<=2;j++) 
   scanf("%d",&a[i][j]);

printf("enter the secound array");
   for(i=0;i<=2;i++)
   for(j=0;j<=2;j++)
   scanf("%d",&b[i][j]);

   for(i=0;i<=2;i++)
   {
   for(j=0;j<=2;j++)
   {
      c[i][j]=0;
   for(k=0;k<=2;k++)
   c[i][j]=a[i][j]+b[i][j];
   } 
   }

   for(i=0;i<=2;i++)
   {for(j=0;j<=2;j++)
   printf("%d",c[i][j]);
   
   printf("\n");}
}

// // -----------------------------------multiplication of 3*3 using 2d array method------------------------------------

// #include<stdio.h>
// void main ()
// {
//    int a[3][3],b[3][3],c[3][3];
//    int i,j,k;

//    for(i=0;i<=2;i++)
//    for(j=0;j<=2;j++)
//    scanf("%d",&a[i][j]);

//    for(i=0;i<=2;i++)
//    for(j=0;j<=2;j++)
//    scanf("%d",&b[i][j]);

//    for(i=0;i<=2;i++)
//    {
//    for(j=0;j<=2;j++)
//    {
//       c[i][j]=0;
//    for(k=0;k<=2;k++)
//    c[i][j]=c[i][j]+a[i][k]*b[k][i];
//    } 
//    }

//    for(i=0;i<=2;i++)
//    {for(j=0;j<=2;j++)
//    printf("%d",c[i][j]);
   
//    printf("\n");}
// }

// #include<stdio.h>
// void main()
// {
//    int i,j,k,n;
//    printf("enter the number");
//    scanf("%d",&n);
//    for ( i = 1; i <=n; i++)
//    {
//       for ( j = i; j <=40-i; j++)
//       {
//          printf("");
//       }
//       for ( k = 1; k <2*i-1 ;k++)
//       {
//       printf("*");
//       }
//       printf("\n");
//    }
   
// }
