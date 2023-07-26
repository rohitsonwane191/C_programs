#include <iostream>
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