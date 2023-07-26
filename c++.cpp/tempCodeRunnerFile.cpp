#include<iostream>
using namespace std;
class number
{private:
     int a;
     int &b=a;
public:
void sow()  
{
     cout<<"enter the a";
     cin>>a;
} public:
void print()
{ cout<<"print to b\n";
     cout<<b;
}
};
class number s;
int main()
{
     s.sow();
     s.print();
}
