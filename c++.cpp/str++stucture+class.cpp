/*#include<iostream>
 using namespace std;
 struct student
 { int roll;
 char name[20];
 char clas[20];
 };
 int main(){
 struct student s;
 {
cout<<"enter roll"<<endl;
cin>>s.roll;
cout<<"enter name"<<endl;
cin>>s.name;
cout<<"enter clas"<<endl;
cin>>s.clas;

cout<<endl<<"roll num is="<<s.roll;
cout<<endl<<"name is="<<s.name;
cout<<endl<<"clas is="<<s.clas;
 }
 }*/

// structure with function calling ;

/*#include<iostream>
 using namespace std;
 struct student
 {
 int roll;
 char name[20];
 char address[20];
int mark;
float per;
 }s;
void show()
{
cout<<"roll number is ="<<s.roll<<endl<<"name is ="<<s.name<<endl<<"address is ="<<s.address<<endl<<"mark is ="<<s.mark<<endl<<"persentage  is ="<<s.per;

}


 int main()
 { cout<<"enter the roll";
 cin>>s.roll;
 cout<<"enter the name";
 cin>>s.name;
 cout<<"enter the address";
 cin>>s.address;
 cout<<"enter the mark";
cin>>s.mark;
cout<<"enter the per";
cin>>s.per;
show();
 }

#include <iostream>
using namespace std;
struct s_acount
{

private:
    int an;
    char name[20];
    int ifc;
    char bank[20];
    char addess[20];

    int amount;

public:
    void input()
    {
        cout << "enter account number";
        cin >> an;
        cout << "enter name ";
        cin >> name;
        cout << "enter bank";
        cin >> bank;
        cout << "enter address";
        cin >> addess;
        cout << "enter amount";
        cin >> amount;
        cout << "enter ifc";
        cin >> ifc;
    }
    void show()
    {
        cout << endl
             << "accunt number is =" << an;
        cout << endl
             << " name is =" << name;
        cout << endl
             << " bank nameis =" << bank;
        cout << endl
             << "address is =" << addess;
        cout << endl
             << "amount  is =" << amount;
        cout << endl
             << "ifc number is =" << ifc;
    }   };

    int main()
    {
        struct s_acount s;


        s.input();
        s.show();
    }
*/
// class acces modifyer
/*
#include<iostream>
using namespace std;
class student
{ private:
 int roll;
 char name[20];
 char clas[50];
public:


void input()
{
     cout<<"enter the roll";
     cin>>roll;
     cout<<"enetr the name";
     cin>>name;
     cout<<"enter the clas";
     cin>>clas;

}
     public:
void ootput()
{
          cout<<endl<<roll<<endl<<name<<endl<<clas;
          roll=200;
}

};
class student s;

int main()
{

     s.input();
     s.ootput();
}

*/
// referance;
/*
#include<iostream>
using namespace std;
int main()
{
int a=20;
cout<<"enter the element od number";
 int &b=a;
cout<<b;
}*/

// write a progra find to area of circle using class;
/*
#include<iostream>
using namespace std;
class area
{
     private:
      int redius;
float pi=3.14, area;
public:
void read()
{
cout<<"enter the redius";
cin>>redius;
}
public:
void def()
{
     area=pi*redius*redius;
     cout<<area;
}
};
class area s;
int main(){
 s.read();
  s.def();
}
*/
// write a program to  find squar using class ;
/*
#include<iostream>
using namespace std;
class number
{
     private:
int a,pow;


public:
void power()
{
 cout<<"enter a";
 cin>>a;
 //for (int  i = 1; i <=10; i++)

pow=a*a;
cout<<pow<<endl;
}
};
class number n;
int main()
{
n.power();
n.power();
n.power();
n.power();
n.power();
}*/
// wirte a program to reference to using class ;
/*
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
*/
//  writea program to find to find referance using  member function with class;
/*
#include<iostream>
using namespace std;
class factorial

{
      private:
int i,n,j,sum=1;
int &b=n;
public:
void read()
{
     cout<<"enter the number of n";
     cin>>n;

}public:
void print()
{ for (int  i = b; i>=1; i--)
{ sum=sum*i;
     cout<<sum<<endl;
}

}
};
class factorial f;
int main()
{
     f.read();
     f.print();

}
*/
/*#include <iostream>
using namespace std;
class unit
{
private:
    int units, charges, charges1, charges2;

public:
    void read()
    {
        cout << "enter units";
        cin >> units;
    }

public:
    void print()
    {

        {
            if (units >= 0 && units <= 100)
            {
                charges = 2 * units;
                cout <<endl<<"chares for 2 rupe per units=:"<< charges;
            }
            else if (units >= 101 && units <= 200)
            {
                charges1 = 3 * units;
                cout<<endl<<"chares for 3 rupe per units=:" << charges1;
            }
            else if (units >= 301 && units <= 500)
                {charges2 = 5 * units;
            cout<<endl<<"chares for 5 rupe per units=:" << charges2;}
        }
    }
};
class unit u;
int main()
{
    u.read();
    u.print();
}
*/
// write a program to find given number to peramit using class ;
/*#include<iostream>
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
       for ( j = 1; j <=40-i; j++)
       {
      cout<<" ";
       }
       for ( k = 1; k <=2*i-1; k++)
       {
          cout<<"*";
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
*/

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


///
/*
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
     for ( i = n; i >=1; i--)
     {
       for ( j = 1; j <=n-i; j++)
       {
      cout<<" ";

       }
       for ( k = 2*i-1; k >=1; k--)

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


*/

/*
#include <iostream>
using namespace std;
class perameter

{
private:
     int i, j, k, n;

public:
     void read()
     {
          cout << "enter the n";
          cin >> n;
     }

public:
     void print()
     {
          for (i = 1; i <= n; i++)
          {
               for (j = i; j < n ; j++)
               {
                    cout <<"";
               }
               for (k = 1; k < n - i; k++)
               {
                    cout << k;
               }
               cout<<endl;
          }
  }  };
     class perameter p;
     int main()
     {
          p.read();
          p.print();
     }
*/
/*
   #include<iostream>
   using namespace std;
   class area
   { private:
     int b,h;
     public:
     void read()
     {  cout<<"enter the brit and heigh";
        cin>>b>>h;
     }
     
     void print()
     {  float A;
          A=1/2*b*h;
         
         cout<<endl<<"area is ="<<A;

     }

   };
   class area a;
   int main()
   {
     a.read();
     a.print();
   }*/