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
        cout << "enter the name ";
        cin >> name1;
        cout << "name of first student " << endl;
        for (int i = 0; i <= 4; i++)
        {
            cin >> marks1[i];
        }
        cout << "enter the name ";
        cin >> name2;
        cout << "name of first student " << endl;

        cout << "name of secound student " << endl;
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

        cout << "1st name is  " << name1 << endl;
        cout << "total is  " << total1 << endl;
        cout << "persentage is %  " << per1 << endl;
        if (total1 >= 165)
        {

            cout << name1 << " is pass" << endl;
        }
        else
            cout << endl
                 << name1 << " is fail" << endl;

        cout << "-------------------------------------" << endl;
        cout << " 2nd name is  " << name2 << endl;
        cout << "total is  " << total2 << endl;
        cout << "persantage is % " << per2;

        if (total2 >= 165)
        {
            cout << endl
                 << name2 << "ispass" << endl;
        }
        else
            cout << endl
                 << name2 << " is fail" << endl;
    }
};
class school s;
int main()
{
    s.input();
    s.output();
}
*/