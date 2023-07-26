#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{

    int i,n,h,t,u,s,sum;
    cout<<"enter the number";
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
    h=i/1000;
    t=(i/100)%10;
    u=(i/10)%10;
    s=i%10;
    }
    printf("first number is =%d\n",t);
    printf("last number is =%d",u);
    

}