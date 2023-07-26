#include<iostream>
using namespace std;
int main()
{
int a[5],i,j,velue;
cout<<"enter the element of the arry";
for ( i = 0; i <=4; i++)
{cin>>a[i];
}

for ( i = 0; i<=4; i++)
{
    for ( j = i; j <=4-i; j++)
    {
    if(a[j]>a[j+1])
    {
        velue=a[j];
        a[j]=a[j+1];
        a[j+1]=velue;
    }
    }
  
        cout<<a[j]<<a[j+1];


// velue=a[0]+a[4];
// printf("%d",velue);  
}
return 0;
}




