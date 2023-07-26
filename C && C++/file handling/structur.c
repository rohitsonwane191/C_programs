#include<stdio.h>
struct sudent
{
int roll,marks[5];
char name[100];
float per;
}st;
void main()
{int i;
    FILE *ptr;
printf("enter the roll number ");
scanf("%d",&st.roll);
printf("name of student");
scanf("%s",st.name);
for (  i = 0; i <5; i++)
{
    scanf("%d",&st.marks);
}

for ( i = 0; i <5; i++)
{st.marks[0]=st.marks[0]+st.marks[1]+st.marks[2]+st.marks[3]+st.marks[4];
}
ptr=fopen("sudarshan.txt","w");
fprintf(ptr," name is :%s\n",st.name);
fprintf(ptr," roll number :%d\n",st.roll);
for ( i = 0; i < 5; i++)
{
fprintf(ptr,"%d\n",st.marks[0]);
    /* code */
}


}