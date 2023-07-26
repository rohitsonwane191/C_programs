#include <iostream>
using namespace std;
class base
{
private:
    int a, b, v;

public:
    base(int x, int y, int o)
    {
        a = x;
        b = y;
        v = o;
    }
    virtual void show()
    {
        cout << "a is =" << a << endl;
        cout << "v is =" << v << endl;
        cout << "b is =" << b << endl;
    }
    base()
    {
    }
    base operator-()
    {
        cout << "- eperator";
        a = a + b;
        v = a + b;
        b = a - b;
    }
    base operator+(base d2)
    { base d3;
        cout << "+ eperator";
        d3.a = d2.a - b;
        d3.v = d2.a - b;
        d3.b = d2.a + b;
    }
};

int main()
{
    base d1(2, 8, 6), d2(9, 5, 7), d3;
    d1.show();
    d2.show();
    d3 = d1 + d2;
}