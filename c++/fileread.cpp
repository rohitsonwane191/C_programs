#include<iostream>
#include<fstream >
using namespace std;
int main()
{
char data[100];

// open a file write mode
fstream my_file;
my_file.open("my_file.txt",ios::out;
if(!my_file){
cout<<"no surch file";
}
else
{
char ch;

while(1)
{my_file>>ch;
if(my_file.eof())
break;
cout<<ch;

}
}
my_file.close();
return 0;
}
