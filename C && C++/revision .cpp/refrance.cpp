#include<iostream>
using namespace std;
struct student 
{
    int number;
    char name[200];
    int mark[5];
    int &b=number;
    void print()
    {
        cout<<"enter the name";
        cin>>name;
        cout<<"enter number";
        cin>>number;
        cout<<"marks";
        for (int  i = 0; i <5; i++)
        {
    int &b=mark[5];
cin>>mark[i];
        }
        for (int  i = 0; i <5; i++)
{
        cout<<mark[i];
   }   
   cout<<b;
   }
}s;
int main()
{
s.print();
cout<<"name is:"<<s.name;
cout<<"number is:"<<s.number;
}