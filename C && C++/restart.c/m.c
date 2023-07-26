#include <stdio.h>
void main()
{

   int i, j, a[5], temp;
   printf("enter the wlwmwnt \n");
   for (i = 0; i <= 4; i++)
      scanf("%d", &a[i]);
   for (i = 0; i <= 4; i++)
   {
      for (j = 0; j < 4 - 1; j++)
      {
         if (a[j] > a[j + 1])
         {
            temp = a[j];
            a[j + 1] = a[j];
            a[j] = temp;
         }
      }

      for (i = 0; i <= 4; i++)
         printf("\n%d", a[i]);
   }
}
