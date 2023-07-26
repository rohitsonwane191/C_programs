#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream obj1 ;
obj1.open("my_file.txt",ios::out);
if(!obj1)
{
    cout<<"file not ctreated";
}
else 
{
    while(1){
    char ch;
cout<<"file ctreat successfully";
obj1>>ch;
obj1.close();
    break;
    }
}
return 0;
}