/*#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char op;
    cout << "enter a and b";
    cin >> a >> op >> b;
    switch (op)
    {
    case '+':
        cout << "sum is =" << a + b;
        break;
    case '-':
        cout << "ghatavf is =" << a - b;
        break;
    case '*':
        cout << "multiple is =" << a * b;
        break;
    case '/':
        cout << "devideis =" << a / b;
        break;
    case '%':
        cout << " modulud  is =" << a % b;
        break;
    default:
        break;
    }
}*/

#include <iostream>
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
     }
};
class school s;
int main()
{
     s.input();
     s.output();
     
     cout<<totl[o];
}