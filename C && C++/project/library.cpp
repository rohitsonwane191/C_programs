#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class  library{
public:
int id;
char  address[100];
char  book_name[100];
char  aouther_name[100];
char  student_name[100];
int price;
int pages;
};
int main()
{
class library b[20];
int input=0,count=0;
while(input!=3)
{ 
cout<<"enter the 1 to inputt detiles like,id,address,name,aouther_nanme,student_name,price,pages"<<endl;
cout<<"enter 2 display detiles"<<endl;
cout<<"enter 3 quit"<<endl;
cin>>input;
switch(input)
{ 
    case 1:
    cout<<"enter the id";
    cin>>b[count].id;
     cout<<"address";
     cin>>b[count].address;
      cout<<" book name";
      cin.getline(b[count].book_name,100,'$');
       cout<<"aouthe name ";
      cin.getline(b[count].aouther_name,100,'$');
       cout<<"student name";
      cin.getline(b[count].student_name,100,'$');
       cout<<"price";
       cin>>b[count].price;
        cout<<"page"<<endl;
       cin>>b[count].pages;
count++;
break;
case 2:
  
for(int i=0;i<count;i++)
{
cout<<"book id is :"<<b[i].id<<endl;
cout<<"addess  is :"<<b[i].address<<endl;
cout<<"book name is :"<<b[i].book_name<<endl;
cout<<" aouther name is :"<<b[i].aouther_name<<endl;
cout<<"student name  is :"<<b[i].student_name<<endl;
cout<<"price is :"<<b[i].price<<endl;
cout<<"pages is :"<<b[i].pages<<endl;
}
break;

case 3:
{
exit(0);
break;
default:
cout<<"you have wrong enter the value";
}
}}}