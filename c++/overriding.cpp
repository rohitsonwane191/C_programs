// overriding programm for area = tringle and cirle;

/*#include <iostream>
using namespace std;
class base
{
public:
    virtual void area()
    {
     cout << "enter the area";
    }
};
class tri : public base
{
    int h, w;
    float a;

public:
    void area()
    {
        cout << "enter the hight";
        cin >> h;
        cout << "enter trhe wigth";
        cin >> w;
        a = 0.5 * h * w;
        cout << "area is =" << a;
    }
};
class cir : public base
{
    int r;
    float a;

public:
    void area()
    {
        cout << "enter the redius";
        cin >> r;
        a = 3.14 * r * r;
        cout << "area is =" << a;
    }
};
int main()
{
    base *p;
    base b;
    p = &b;
    p->area();
    tri t;
    p = &t;
    p->area();
    cir c;
    p = &c;
    p->area();
}
*/
// dynamic memory alocation 
// #include<iostream>
// using namespace std;
// class base
// {
// public:
// char  name[100];
// char surname[100];
// int marks[5];
// public: virtual void display()
// {
// cout<<"enter the data";
// }
// }; 
// class show:public base
// {
//     public:
//    virtual void display()
//     {
//         int i,s;
//         cout<<"enter the marks";
//         for ( i = 0; i <5; i++)
//         {
//         cin>>marks[i];
        
//         s=marks[i];
//         }
//     }
// };
// class per: public show
// {public:

//  virtual void display()
// {int i;
//     for ( i = 0; i <5; i++)
//     {
//     // cout<<marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
//     cout<<marks[i];
//     }
    
// }
// };
// int main()
// {
// base *p;
// base b;
// p=&b;
// p->display();
// show d;
// p=&d;
// p->display();
// per l;
// p=&l;
// p->display();



// }
/*
#include<iostream>
using namespace std;
class base
{
public:
 virtual void sub()
{
    int a,b,c;
    cout<<"enter the first element";
    cin>>a>>b>>c;
    cout<<a<<b<<c;
}
};
class xyz: public base
 {int i,j,k;
    public:
void sub()
{
    cout<<"enter the number of element";
    cin>>i>>j>>k;
    cout<<i<<j<<k;
}
 };
int main()
{
base *p;
base h;
p=&h;
p->sub();
xyz y;
p=&y;
p->sub();
}
*/
