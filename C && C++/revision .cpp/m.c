/*#include<stdio.h>
#include<stdlib.h>
void main()
{

int n,*p,i;
printf("enter the number ");
scanf("%d",&n);
p=(int*) malloc(n*2);
for ( i = 0; i <n; ++i)
{

scanf("%d",p+i);

}
printf("%d",i);

}
*/
#include <stdio.h>
struct student
{

    int i, a[5], sum;
    float per;
    char name[100];
} st;
void intput()
{

    printf("enter thename ");
    gets(st.name);
    printf("subject marks");
    for (int i = 1; i < 5; i++)
    {
        scanf("%d", &st.a[i]);
    }
}
void output()
{
    int s;
    // printf("%d",st.name);
    puts(st.name);
    for (int i = 1; i < 5; i++)
    {

        printf("%d", st.a[i]);
    }
    for (int i = 1; i < 5; i++)
    {
        s = (st.per = st.a[0] + st.a[1] + st.a[2] + st.a[3] + st.a[4]);
    }
    printf(" total marks is =%d\n", s);
}
void main()
{
    intput();
    output();
}