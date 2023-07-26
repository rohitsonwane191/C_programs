/*#include<iostream>
using namespace std;
class base
{
public:
 virtual void display(int a,int v)
{
    cout<<"\n this is formal perameter";
    cout<<a+v;
}
};
class der: public base
{
public:
 void display()
{
    cout<<"\n this is derevived perameter";
}
};
int main()
{
    base *p;
    base b;
    p=&b;
    p->display(2,9);
    der d;
    p=&d;
    p->display(2.5,56.8);

}
*/
/*
#include<iostream>
using namespace std;
class ex
{
public:
virtual void function()
{
cout<<"this is formal perameter\n";
}
};
class der:public ex
{
void function()
{
    cout<<" this is function derived\n";
}
};
int main()
{
ex *s;
ex b;
s=&b;
s->function();
der d;
s=&d;
s->function();
}
*/
/*
#include<iostream>
using namespace std;
class number
{
    private:
    int a,b,c;
public:
number( int x,int y,int z)
{
    a=x;
    b=y;
    c=z;
}
void show()
{ 
cout<<endl<<"a="<<a;
cout<<endl<<"b="<<b;
cout<<endl<<"c="<<c;
}
void operator-()
{
    a=-a;
    b=-b;
    c=-c;
}
};
int main()
{
 class number n(10,20,30);
 n.show();
 -n;
 n.show();
}*/

/*
#include<iostream>
using namespace std;
class base
{
    private:
    int a,b,c;
    public:base(int x,int y,int z)
    {

        a=x;
        b=y;
        c=z;
    }
    void show()
    {
        cout<<"a is ="<<a;
        cout<<"b is ="<<b;
        cout<<"c is ="<<c;

    }
   void  operator -()
   {
    a=b-a;
    b=c-b;
    c=c-a;

   }

};
int main()
{
    class base b(1,5,6);
    b.show();
    -b;
    b.show();
}
*/
/*
#include<iostream>
using namespace std;
class operators
{
    private:
    int a,b,c,d;
    public:operators(int x,int y,int z,int l)
    {
a=x;
b=y;
c=z;
d=l;

    }
     void show()
    {
        cout<<endl<<"a is ="<<a;
        cout<<endl<<"b is ="<<b;
        cout<<endl<<"c is ="<<c;
        cout<<endl<<"d is ="<<d<<endl;
    }
    void operator -(  )
    {
        cout<<" ADDDITON";
        a=a+b;
        b=b+c;                                                                                                                                                                                
        c=c+d;
        d=a+d;
    }
    void operator +()
    {
        a=a-b;
        b=b-c;
        c=c-d;
        d=a-d;

    }
};
int main()
{
class operators s(5,6,6,7);
s.show();
-s;
s.show();
+s;
s.show();
}*/
/*
#include<iostream>
using namespace std;
class base
{
private: int a,b;
public:base( int x,int y)
{ 
 a=x;
 b=y;
}
void show()
{
    cout<<"a is :"<<a<<endl;
    cout<<"b is :"<<b<<endl;

}
base operator +()
{ cout<<"two numbers aadition";
    a=a-b;
}
base operator -()
{
    cout<<"two numbers devision";
    a=a+b;
}
};
int main()
{
class base s(4,2);
s.show();
+s;
s.show();
-s;
s.show(); 
s.show();
}*/

#include<iostream>
using namespace std;
class base
{
    private:
    int x,y,z;
    public:base(int e,int i,int p)
    {  x=e;
    y=i;
    z=p;
    }
    base()
    {}
    public:
   virtual void show()
    {
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
        cout<<"z="<<z<<endl;
    }
public:
     virtual void operator +(base d2)
    { base d3;
    d3.x=x+d2.x;
    d3.y=y+d2.y;
    d3.z=z+d2.z;
    d3.x=x;
    d3.y=y;
    d3.z=z;
    }
};
int main()
{
 base d1(1,5,6),d2(5,6,4),d3;
d1.show();
d2.show();
d3.show();
}