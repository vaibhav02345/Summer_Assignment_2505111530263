#include<iostream>
using namespace std;

int main()
{
    int x,n,a=1;
    cout<<"Enter base: ";
    cin>>x;
    cout<<"Enter power: ";
    cin>>n;
    while(n>0)
    {
        if(n%2==1)
            a=a*x;

        x=x*x;
        n=n/2;
    }
    cout<<"Answer: "<<a;
    return 0;
}