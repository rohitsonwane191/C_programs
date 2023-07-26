// sorting  part in array

/*#include <iostream>
using namespace std;
int main()
{

    int i, j, n[5], temp;
    cout << "enter the number";
    for (i = 0; i <= 4; i++)
    {
        cin >> n[i];
    }

    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j <= 4 - 1 - i; j++)

            if (n[j] > n[j + 1])
            {

                temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;


            }

                cout<<n[j];
    }
}



*/
/*
#include <iostream>
using namespace std;
int main()
{

    int i, j, n[5], temp;
    cout << "enter the number";
    for (i = 0; i <= 4; i++)
    {
        cin >> n[i];
    }

    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j <= 4 - 1 - i

            if (n[j] < n[j + 1])
            {

                temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;


            }

                cout<<n[j];
    }
}
*/
/*
#include <iostream>
using namespace std;
int main()
{

    int i, j, n[5], temp, flag;
    cout << "enter the number";
    for (i = 0; i <= 4; i++)
    {
        cin >> n[i];
    }

    for (i = 0; i <= 4; i++)
    {
    flag=0;
        for (j = 0; j <= 4 - 1 - i; j++)


            if (n[j] > n[j + 1])
            {
            flag=1;
                temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;


            }
                     cout<<endl<<n[j]<<endl;
        if(flag==0)

        cout<<"shorting S is="<<j;



    }



}
*/
/*#include<iostream>
using namespace std;
int main()
{

int i,j,n[5],key,found;
cout<<"enter the array"<<endl;
for ( i = 0; i <4; i++)
{
    cin>>n[i];
}
cout<<"enter the key"<<endl;
cin>>key;
for (int j = 0; j <4; j++)
{


if(key==n[j]){
found=0;
break;}}
if(found==0)
cout<<"element found"<<endl;
else
cout<<"element not found";
}
*/
/*#include <iostream>
using namespace std;
void sample(int a[])
{
int i,sum=0;
for ( i = 0; i <=4; i++)
{
    {cout<<a[i]<<endl;
    sum=sum+a[i];
cout<<endl<<"sum is "<<sum<<endl;
}}

}


int main()
{
int a[5]={1,34,55,66,77};
sample(a);


}

*/

/*#include <stdio.h>

 struct pass
{
void show()
{
int  s[4][2],i,j,temp;
printf("enter the rows and coums");
for (i = 0; i <= 3; i++)
    for (j = 0; j <= 1; j++)

        scanf("%d", &s[i][j]);

for (i = 0; i <= 3; i++)
{
    for (j = 0; j <= 1; j++)
        printf("%d",& s[i][j]);
    printf("\n");
}

for (i = 0; i <= 1; i++)
{
    for (j = 0; j <= 3; j++)
        printf("%d", &s[j][i]);
    printf("\n");
}
}};
struct pass obj;
int main()
{
    obj.show();
}*//*
#include<stdio.h>
char school[60]={"hire secoundry school barwani"};
char name[30];
char clas[30];
int roll[60];

struct student
{
    void input()
 {   
 
printf("enter the name");
scanf("%s",name);
printf("enter the class");
scanf("%s",clas);
printf("enter the roll");
scanf("%s",roll);
 }
    
void out()
{
printf(" the roll is ==%s\n",roll);
printf(" the name is ==%s\n",name);
printf(" the class is ==%s\n",clas);
printf(" the school is ==%s\n",school);
}
    
};
struct student op;
int main()
{
op.input();
op.out();

}*/
/*
#include<stdio.h>
#include<stdlib.h>
int  main()
{
int i=0;
char name[30],ch;
float per;
printf("emter the name");
while (ch!='\n')
{
    ch=getchar();
    name[i]=ch;
    i++;
}
name[i]='\0';
printf(" name:%s",name);

return 0;


}
*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
int roll[60];
char name[60],clas[60],school[60]={"hair secoundry school barwani"};
printf("enter the name ");
gets(name);
printf("enter the class ");
gets(clas);
printf("enter the roll ");
scanf("%s",roll);

printf("the roll number is is = %s\n",roll);
printf("the name is =%s\n",name);
printf("the  lenth of name is =%d\n ",strlen(name));
printf("the name is %s\n=",clas);
printf("the  lenth of class is =%d\n   ",strlen(clas));
printf("the school is %s\n =",school);
printf("the  lenth of scholl is = %d  \n   ",strlen(school));

}*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
int  roll;
char name[60];
printf("enter the name");
get_s(name); 
printf("enter the roll number%d",&roll);
printf("the name is = %s",name);
printf("the roll is = %s",roll);

printf("the  new roll number is= %s",strcpy(roll) );
}
*/

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