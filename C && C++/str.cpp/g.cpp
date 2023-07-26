#include<iostream>
using namespace std;
class paramiter
{ private:
int i,j,k,n;
public:
void read()
{
cout<<"enter the n";
cin>>n;
}
public:
void print()
{
     for ( i = 1; i <=n; i++)
     {
       for ( j = i; j <=n-1; j++)
       {
      cout<<" ";
       }
       for ( k = 1; k <=2*i-1; k++)

       {

          cout<<k;
       }
       cout<<endl;
     }
}

};
class paramiter p;
int main()
{
     p.read();
     p.print();
}

