/*#include<iostream>
using namespace std;
class student
{
private:
int roll;
char name[100];
char surname[100];
public:
void input()
{
    cout<<"enter the roll";
    cin>>roll;
    cout<<"enter the name";
    cin>>name;
    cout<<"enter the surname";
    cin>>surname;
}
void output()
{

cout<<roll<<endl;
cout<<name<<endl;
cout<<surname;
}

};
class student s;
int main()
{

s.input();
s.output();
}
*/
/*#include<iostream>
using namespace std;
class student

{public:
    int a;
    void dev()
    {
cout<<"enter the a";
cin>>a;
    }

};
class der: public student
{public:
    int b;
    void veb()
    {
cout<<"enter the b";
cin>>b;

    }
void sow(){
    int s;
    cout<<"the number of a and b  is sum "<<a+b;
}}s;
int main()
{
    s.dev();
s.veb();
s.sow();
}
*/
/*
#include<iostream>
using namespace std;
class bass
{public:
  int roll;
  char name[100];
  float per;
  public:
 void  input()
 {
  cout<<"enter the roll";
  cin>>roll;
  cout<<"enter then name";
  cin>>name;
 }
};
class der:public bass
{
  public:
  void show()
  {       cout<<"the roll number is :"<<roll;
          cout<<e ndl<<"the name is :"<<name;
  }
};
int main()
{
  class der v;
v.input();
v.show();
}*/
/*
#include<iostream>
using namespace std;
class bass
{public:
int a;
void input()
{
    cout<<"entr the value";
    cin>>a;
}
};
class mal
{public:
    int b;
    void input1()
    {
        cout<<"enter the secound value ";
        cin>>b;
    }
};
class c: public bass ,public mal
{public:
    int s;
    void show()
    {
        s=a+b;
        cout<<s;
    }
};
int main()
{
    class c s;
    s.input();
    s.input1();
    s.show();
}*/
/*
#include <iostream>
using namespace std;
class a
{
public:
        int m;
    int input()
    {
        cout << "enter the c";
        cin >> m;
    }
};
class b
{

public:
        int v;
    int input1()
    {
        cout << "enter the v";
        cin >> v;
    }
};
class c : public a, public b
{
public:
        int x;
    int show()
    {
        x = m + v;
        cout<<x;
    }
};
int main()
{
class c s;
    s.input();
    s.input1();
    s.show();
}*/
/*
#include<iostream>
using namespace std;
class base_class
{ public:
void input()
{
int x;
cout<<"enter the number";
cin>>x;
}
};
class class1: virtual public base_class
{public:
void input1()
{
int y ;
cout<<"enter the number";
cin>>y;

}
};
class clas2: virtual public base_class
{public:
void input2()
{
    int z;
cout<<"enter the number";
cin>>z;
}

};
class derived_class:public class1,public clas2
{
public:
void sum()
{
    int sum_s;
}
};
int main()
{int s;
derived_class obj;
obj.input();
obj.input1();
obj.input2();
}
*/
/*#include<iostream>
using namespace std;
int  main()
{int n,i,j,k;
cout<<"enter thenumber";
cin>>n;
for ( i = 1; i<=n; i++)
{
for ( j = i; j<40-1; j++)
{
    cout<<"";
}
for ( k = i; k<=3*i-1; k++)
{
cout<<"*";
}
cout<<endl;
}

}*/
#include<iostream>
using namespace std;
int main()
{
int i,j,k,n;
cout<<"enter the number";
cin>>n;
for ( i=1; i<=n;i++)
{ for (j=i; j<=40-i;j++)
{
 cout<<"";
}
for ( k = i; k <=n-i; k++)
{
    cout<<"*";
}
cout<<endl;

}

}