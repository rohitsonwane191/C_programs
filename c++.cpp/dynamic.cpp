// dynsmic memori mgt in c++

#include<iostream>
using namespace std;
int main()
{
     int *p,fact=1;
     p=new int ;
          for (int i = 1; i <=50; i++){
     for(*p=1;*p<=100;(*p)++)
     
          fact=fact*(*p);

     cout<<"table is =*"<<i<<fact<<endl;}


}




/*
#include<iostream>
using namespace std;
int main()
{
int fact,*i,n;
i= new int ;
cout<<"enter the number ";
cin>>n;
for ( *i = n; *i <=1; (*i)--)
{
     fact=fact*(*i);
cout<<"factorial is ="<<fact<<endl;
}



}                    */