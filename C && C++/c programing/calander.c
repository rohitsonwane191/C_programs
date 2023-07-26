
/*#include<stdio.h>
#include<conio.h>
int main(){
int x =25;
int y = 10;
printf("%d",&x,&y);
}*/
/*#include<stdio.h>
int main()
{
int a,PRSENTAGE;
printf("enter the GRET");
scanf("%d",&PRSENTAGE);
(PRSENTAGE<=80&&PRSENTAGE>=60)?(printf("A")):(printf("NO ADDMISION THIS COLLAGE"));

}*/
/*#include<stdio.h>
int main(){
int h=1,z;
 z= ++h + h++ + ++h;
printf("h=%d\n",h);
printf("z=%d\n",z);
    return 0;
}*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int date, month;
    printf("enter the date=\n month\n");
    scanf("%d%d", &date, &month);
    if (date == 3 || date == 10 || date == 17 || date == 24 || date == 31)
        printf(" monday / %d 2022 ", date);

    // else  if(month ==1||month==2||month==3||month==4||month==5||month==6||month==7||month==8||month==9||month==10||month==11||month==12)

    else if (date == 4 || date == 11 || date == 18 || date == 25 || date == 1)
        printf("tuesday / %d -2022", date);

    else if (date == 5 || date == 12 || date == 19 || date == 26 || date == 2)
        printf("wednesday / %d -2022", date);
    else if (date == 6 || date == 13 || date == 20 || date == 27)
        printf("frienday / %d -2022", date);
    else if (date == 7 || date == 14 || date == 21 || date == 28)
        printf("thusday / %d -2022", date);
    else if (date == 8 || date == 15 || date == 22 || date == 29)
        printf("suturday / %d -2022", date);
    else if (date == 9 || date == 16 || date == 23 || date == 30)
        printf("frienday / %d -2022 ", date);
    if (date >= 0 >=31)
        printf("envelide date");
    // else if(month==1||month==2||month==3||month==4||month==5||month==6||month==7||month==8||month==9||month==10||month==11||month==12)
    else if (month == 1)
        printf("\njanuary");
    else if (month == 2)
        printf("\nfebruary");
    else if (month == 3)
        printf("\nmarch");
    else if (month == 4)
        printf("\n april");
    else if (month == 5)
        printf("\n may");
    else if (month == 6)
        printf("\n june");
    else if (month == 7)
        printf("\n july");
    else if (month == 8)
        printf("\n agust");
    else if (month == 9)
        printf("\n septamber");
    else if (month == 10)
        printf("\n octomber");
    else if (month == 11)
        printf("\nnavember");
    else if (month == 12)
        printf("\n december");
    getch();
    
}
