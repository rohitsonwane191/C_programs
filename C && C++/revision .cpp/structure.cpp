// [NOT::]c++ me member and menber function bydefalt public hote he

// noramal structure function calling;
/*#include<iostream>
#include<string.h>
using namespace std;
struct student
{
char name[100];
int roll,per;
char surname[100];
}s;
void input()
{
cout<<"enter the name";
cin>>s.name;
cout<<"enter surname";
cin>>s.surname;
cout<<"enter roll";
cin>>s.roll;
}
void show()
{char v;
cout<<"roll number is:"<<s.roll;
cout<<endl<<"name is :"<<s.name;
cout<<s.surname;
}
int main()
{
input();
show();
}*/

/*#include<iostream>
using namespace std;
struct student
{private:
    int roll;
    char name[100];

public:
void show()
{
cout<<"enter roll number";
cin>>roll;
cout<<"enter the name";
cin>>name;
    cout<<roll<<endl;
    cout<<name;
}
};
int main()
{
    struct student s;
    s.show();
}*/
// structure function
/*
#include <iostream>
using namespace std;
struct student
{private:
    int roll;
    char name[100];
    float per;
    int  marks[5];

public:
    void show()
    {
        cout << "enter the roll  number";
        cin >> roll;
        cout << "enter the name";
        cin >> name;
        cout << "enter the marks";
        for (int i = 0; i < 5; i++)
        {

            cin >> marks[i];
        }
        for (int i = 0; i < 5; i++)
        {per= float(marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5;}
    cout << "the roll number is:" << roll<<endl;
    cout << "the roll number is:" << name<<endl;
    cout << "the roll number is:" << per;
    
}


}s;
int main()
{
s.show();
}*/
