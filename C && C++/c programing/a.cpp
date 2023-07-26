#include<iostream>
using namespace std;
class school
{
int m,m2,m3,m4,m5,total1,total2;
char name1[20];
char name2[20];
double pe;
public:
void input()
{
     cout<<"enter the sunject";
     cin>>m>>m2>>m3>>m4>>m5;
          cout<<"enter the sunject"; 
     cin>>m>>m2>>m3>>m4>>m5;
cout<<"enterthe name ";
cin>>name1;
cout<<"enterthe name ";
cin>>name2;

}
public:
void output()
{
    // cout<<m<<m2<<m3<<m4<<m5;
     //cout<<m<<m2<<m3<<m4<<m5;
//cout<<name1;
//cout<<name2;
     total1=m+m2+m3+m4+m5;
     total2=m+m2+m3+m4+m5;
cout<<"name is"<<name1<<endl<<total1<<endl<<"name is"<<name2<<endl<<
total2;
}
};
 class school s;
int main()
{
     s.input();
     s.output();
 
}