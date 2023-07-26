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

*/
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
// write a program to area of triangle;
/*
    #include<iostream>
 using namespace std;
 class area
 { private:
   float A,h,b;

   public:
   void read()
   {  cout<<"enter the brit and heigh";
      cin>>b>>h;
   }
   public:
   void print()
   {
        A= (b*h)/2;

       cout<<endl<<"area is ="<<A;
   }
 };
 class area a;
 int main()
 {
   a.read();
   a.print();
 }*/

// write a program to area of circle using getter and setter method;
/*#include<iostream>
 using namespace std;
 class area
 { private:
int r=1;
float A ,pi=3.14;
public:
void setvalue( int redius)
{ r=redius;

} public:
float  gettervalue()
{
A=pi*r*r;
return(A);
}
 };
 class area a;
 int main()
 {
 a.setvalue(2);
 cout<<endl<<a.gettervalue();
 }*/

/*#include <iostream>
using namespace std;
void display(int n )
{
     for (int i = 1; i <= n; i++)
     {
     int s;
          for (int j = i; j <= n; j++)
          {
               cout << " ";
          }
          for (int k = 1; k <= 2 * i - 1; k++)
          {
               //cout << "*";
               cout << k;
               s = k;
          }
          cout << endl;
     }

     void display(int x,int y);
     {
       int s;
       int fact;
for (int i = n; i >=1; i--)
{
     for (int j = i; j <= n; j++)
     {
          cout << " ";
     }     for (int k = 1; k <= 2 * i - 1; k++)

fact=n*i;
cout<<fact;
s=fact;
     }
     cout << endl;
}

}

int main()
{
     display(5,0);
     display(5);
}
*/

// function overloading ;
/*
#include <iostream>
using namespace std;
void display(double a)
{
     double fact = 1;
     double s;
     for (double i = a; i >= 1; i--)
     {
          fact = fact * i;
          s = fact;
     }

     cout << endl
          << "factorial is =" << s << endl;

     cout << "----------------------------------------" << endl;
}
void display(double a, int b, int c)
{
     // cout<<"perameter is ";
     double s;
     for (int i = 1; i <= a; i++)
     {
          for (int j = i; j <= a; j++)
          {
               cout << " ";
          }
          for (int k = 1; k <= 2 * i - 1; k++)
          {
               // cout<<"*";
               s = k;
               cout << k;
          }
          cout << endl;
     }
}
int main()
{
     display(5.3);
     display(5.3, 0, 0);
}

// function overloading ;
/*
#include<iostream>
using namespace std;
void student( char a)
{
int s;

cout<<endl<<"factorial is ="<<s;

}
void student(int a,int b,int c)
{
//cout<<"perameter is ";
int s;
for (int i = 1; i <= a; i++)
{
int s;
     for (int j = i; j <= a; j++)
     {
          cout <<" ";
     }
     for (int k = 1; k <= 2 * i - 1; k++)
     {
          cout<<"*";
          //s = k;
         // cout << k;
     }
     cout <<endl;
//cout<<endl<<student is ="<<s;

}}
 int main()
 {
student(5,0,0);
student(5,0);

 }*/

/*#include <iostream>
using namespace std;
void volum(double r)
{
     float v, pi = 3.14;
     v = 4 / 3 * pi * r * r * r;
     cout << endl
          << "the sphere is =" << v;
}

void volum(int r, double h)
{
     double v, pi = 3.14;
     v = pi * r * r * h;
     cout << endl
          << "the cylinder is =" << v;
}
void volum(double l, double w, double h)
{
     double v;
     v = l * w * h * l;
     cout << endl
          << "the rectangular is =" << v;
}
void volum(int a)
{
     int v;
     v = a * a * a;
     cout << endl
          << "the cube is =" << v;
}
void volum(double pi, int h, double d)
{
     double v;
     v = 2 / 15 * pi * d * d * h;
     cout << endl
          << "the parabolic cone  is =" << v;
}
int main()
{
     volum(5.8);
     volum(2, 1.6);
     volum(1.2, 2.3, 2.4);
     volum(7);
     volum(3.14, 1.3, 5);
}
*/
/*#include <iostream>
using namespace std;
class school
{
     int marks1[5];
     int marks2[5];
     int total1, total2;
     char name1[20];
     char name2[20];
     double per1, per2;

public:
     void input()
     {
          cout << "enterthe name ";
          cin >> name1;
          cout << "enterthe name ";
          cin >> name2;
          cout << "enter the marks ";
          for (int i = 0; i <= 4; i++)
          {
               cin >> marks1[i];
          }
          cout << "enter the marks";
          for (int j = 0; j <= 4; j++)
          {
               cin >> marks2[j];
          }
     }

public:
     void output()
     {

          for (int i = 0; i <= 4; i++)
          {
               total1 = marks1[0] + marks1[1] + marks1[2] + marks1[3] + marks1[4];
          }
          for (int j = 0; j <= 4; j++)
          {
               total2 = marks2[0] + marks2[1] + marks2[2] + marks2[3] + marks2[4];
          }

          per1 = total1 / 5;
          per2 = total2 / 5;
          if(total>=165)
          {
               cout<<"pass";
          }
          else
          cout<<"fail";

          cout <<"1st name is  "<< name1 << endl
              <<"total is  " << total1 << endl
               <<"persentage is %  "<< per1 << endl
               <<" 2nd name is  "<< name2 <<endl<<"total is  "<< total2 << endl
               <<"persantage is  "<< per2;
     }
};
class school s;
int main()
{
     s.input();
     s.output();
}
*/
/*#include <iostream>
using namespace std;
class school
{
     int marks1[5];
     int marks2[5];
     int total1, total2;
     char name1[20];
     char name2[20];
     double per1, per2;

public:
     void input()
     {
          cout << "enterthe name ";
          cin >> name1;
          cout << "enterthe name ";
          cin >> name2;
          cout << "enter the marks ";
          for (int i = 0; i <= 4; i++)
          {
               cin >> marks1[i];
          }
          cout << "enter the marks";
          for (int j = 0; j <= 4; j++)
          {
               cin >> marks2[j];
          }
     }

public:
     int  output()
     {

          for (int i = 0; i <= 4; i++)
          {
               total1 = marks1[0] + marks1[1] + marks1[2] + marks1[3] + marks1[4];
          }
          for (int j = 0; j <= 4; j++)
          {
               total2 = marks2[0] + marks2[1] + marks2[2] + marks2[3] + marks2[4];
          }

          per1 = total1 / 5;
          per2 = total2 / 5;

          cout <<"1st name is  "<< name1 << endl
              <<"total is  " << total1 << endl
               <<"persentage is %  "<< per1 << endl
               <<" 2nd name is  "<< name2 <<endl<<"total is  "<< total2 << endl
               <<"persantage is  "<< per2;
               return(per1);
     }

};
class school s;
int main()
{
     s.input();
     s.output();


}
*/
/*#include <iostream>
using namespace std;
class school
{
     int marks1[5];
     int marks2[5];
     int total1, total2;
     char name1[20];
     char name2[20];
     double per1, per2;

public:
     int sf()
     {
          cout << "enterthe name ";
          cin >> name1;
          cout << "enter the marks ";
          for (int i = 0; i <= 4; i++)
          {
               cin >> marks1[i];
          }
          for (int i = 0; i <= 4; i++)
          {
               total1 = marks1[0] + marks1[1] + marks1[2] + marks1[3] + marks1[4];
          }

          per1 = (float)total1 / 5;

          cout << "1st name is  " << name1 << endl
               << "total is  " << total1 << endl
               << "persentage is %  " << per1 << endl;
          if (total1 > 165)
               cout << endl
                    << "pas";

          else
               cout << endl
                    << "fail";
          return (marks1[0]);
     }

public:
     int output()
     {
          cout << "enterthe name " << endl;
          cin >> name2;
          cout << "enter the marks ";
          for (int j = 0; j <= 4; j++)
          {
               cin >> marks2[j];
          }
          for (int j = 0; j <= 4; j++)
          {
               total2 = marks2[0] + marks2[1] + marks2[2] + marks2[3] + marks2[4];
          }

          per2 = (float)total2 / 5;

          cout << " name is  " << name2 << endl
               << "total is  " << total2 << endl
               << "persentage is %  " << (float)per2 << endl;
          if (total2 > 165)

               cout << endl
                    << "pas";

          else
               cout << endl
                    << "fail";
          return (marks2[0]);
     }
};
class school s;
int main()
{
     int marks1, marks2;
     marks1 = s.sf();
     cout << endl
          << "return is" << marks1 << endl;

     marks2 = s.output();

     cout << endl
          << "return is" << marks2;
}
*/
/*#include<iostream>
using namespace std;
class number
{
private:
int a,b;
public:
number(int x,int y)
{
a=x;
b=y;
}
void addition( number obj1,number obj2 )
{
 cout<<obj1.a+obj2.a<<endl;
 cout<<obj1.b+obj2.b;

    
}

};
int main()
{

number obj1(22,44),obj2(55,77),obj3(0,0);
//obj1.addition();
//obj2.addition();
obj3.addition(obj1,obj2);
}*/


/*#include<iostream>
using namespace std;
class show
{
private: int km,mt;
public:
show( int k,int m)
{
     km=k;
     mt=m;

}

void see()
{
     cout<<km<<endl;
     cout<<mt<<endl;
}

void toal_distance( show d1,show d2)
{
cout<<endl<<d1.km+d2.km;
cout<<endl<<d1.mt+d2.mt;
}

};
int main()
{
show D1(22,77),D2(44,88),D3(0,0);
D1.see();
D2.see();
D3.toal_distance(D1,D2);
}*/


/*#include<iostream>
using namespace std;
class number  
{
     private:
     int n;
     public:
     number( int num)
     {
          n=num;
     }
     void show()
     {
          cout<<endl<<"number="<<n;
     }
 void show(number ob)
 {
     cout<<endl<<"function passing n "<<ob.n;
 }

};
int main()
{ number obj1(100),obj2(500);
obj1.show();
obj1.show(obj2);
obj2.show();
}
*/

/*#include<iostream>
 using namespace std;
 class distance 
 {
     private: int km,mt;
     public:
     distance( int k,int m)
     { km=k;
     mt=m;
     }
     void show()
     {

          cout<<endl<<"km"<<km<<endl;
          cout<<endl<<"mt"<<mt<<endl;
     }

void total_dis( distance d1,distance d2)
{

cout<<d1.km+d2.km<<endl;
cout<<d1.mt+d2.mt<<endl;

}
};
int main()
{
class distance D1(5000,200),D2(666,600);
     D1.show();
     D2.show();
     D1.total_dis(D1,D2);
}
*/
/*#include<iostream>
 using namespace std;
 class distance 
 {
     private: int km,mt;
     public:
     distance( int k,int m)
     { km=k;
     mt=m;
     }
     void show()
     {

          cout<<endl<<"km"<<km<<endl;
          cout<<endl<<"mt"<<mt<<endl;
     }

void total_dis( distance d1,distance d2)
{

cout<<d1.km+d2.km<<endl;
cout<<d1.mt+d2.mt<<endl;

}
};
int main()
{
class distance D1(5000,200),D2(666,600);
     D1.show();
     D2.show();
     D1.total_dis(D1,D2);
}
*/
/*#include<iostream>
 using namespace std;
 class distance 
 {
     private: int km,mt;
     public:
     distance( int k,int m)
     { km=k;
     mt=m;
     }
     void show()
     {

          cout<<endl<<"km"<<km<<endl;
          cout<<endl<<"mt"<<mt<<endl;
     }

void total_dis( distance d1,distance d2)
{

cout<<d1.km+d2.km<<endl;
cout<<d1.mt+d2.mt<<endl;

}
};
int main()
{
class distance D1(5000,200),D2(666,600);
     D1.show();
     D2.show();
     D1.total_dis(D1,D2);
}
*/



/*#include<iostream>
 using namespace std;
 class distance 
 {
     private: int km,mt;
     public:
     distance( int k,int m)
     { km=k;
     mt=m;
     }
     void show()
     {

          cout<<endl<<"km"<<km<<endl;
          cout<<endl<<"mt"<<mt<<endl;
     }

void total_dis( distance d1,distance d2)
{

cout<<d1.km+d2.km<<endl;
cout<<d1.mt+d2.mt<<endl;

}
};
int main()
{
class distance D1(5000,200),D2(666,600);
     D1.show();
     D2.show();
     D1.total_dis(D1,D2);
}
*/


/*#include<iostream>
 using namespace std;
 class cmp 
 {
     private: int price,discount;
     char company;
     public:
     cmp( int k,int m)
     { price=k;
     discount=m;
     }
     cmp(char z)
     {
 company=z;
     }

     void show()
     {

          cout<<endl<<"price"<<price<<endl;
          cout<<endl<<"discount"<<discount<<endl<<endl;
     }

void total_dis( cmp d1,cmp d2,cmp d3,cmp d4)
{

cout<<"total price is"<<d1.price+d2.price<<endl;
cout<<"totaldiscount is"<<d1.discount+d2.discount<<endl;

cout<<"secound price is "<<d3.price+d4.price<<endl;
cout<<"secound disount is"<<d3.discount+d4.discount<<endl;

}
};
int main()
{
class cmp D1(5000,200),D2(666,600),d3(22000,600),d4(2000,888);
     D1.show();
     D2.show();
     d3.show();
     d4.show();
     D1.total_dis(D1,D2,d3,d4);
}
*/

#include<iostream>
using namespace std;
class book 
{
 private:int price, discount;
 public:
 book(int x,int y)
 {
price=x;
discount=y;
 } 
 book()
 {
 }
 void show()
 {

     cout<<"price ="<<price;
     cout<<"discount ="<<discount;
 }
void total( book b1,book b2)
{
cout<<b1.price+b2.price<<endl;
cout<<b1.discount+b2.discount;

}

      
};
int main()
{ class book b1(22,55),b2(888,55);

b1.total(b1,b2);
}
























































