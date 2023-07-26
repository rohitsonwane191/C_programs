#include<fstream>
#include<iostream>
using namespace std;
int main()
{
ofstream obj;
obj.open("aniket.txt");
obj<<"hello";
obj.close();
return 0;
}