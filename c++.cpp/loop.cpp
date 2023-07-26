// table 1 to 10+ sum
/*#include<iostream>
using namespace std;
int main()
{ int sum;
for(int i=1;i<=10;i++)
cout<<i;
sum=sum+1;
cout<<endl<<sum;
}*/

#include <iostream>
using namespace std;
int main()
{
 char n, i, j, k;
    cout << "enter n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 40 - i; j++)
        {
            cout << " ";
        }
        for (k = 'a'; k <='z'; k++)
        {
        
            cout << i;
    
        }
        cout << "\n";


    }
}
