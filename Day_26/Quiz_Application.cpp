#include<iostream>
using namespace std;

int main()
{
    int score=0;
    char ans;
    cout<<"Q1. Capital of India?\n";
    cout<<"a.Delhi\nb.Mumbai\nc.Kolkata\nd.Chennai\n";
    cin>>ans;
    if(ans=='a'||ans=='A')
        score++;
    cout<<"\nQ2. 5+7=?\n";
    cout<<"a.10\nb.11\nc.12\nd.13\n";
    cin>>ans;
    if(ans=='c'||ans=='C')
        score++;
    cout<<"\nQ3. C++ was developed by?\n";
    cout<<"a.James Gosling\nb.Bjarne Stroustrup\nc.Dennis Ritchie\nd.Guido van Rossum\n";
    cin>>ans;
    if(ans=='b'||ans=='B')
        score++;
    cout<<"\nYour Score: "<<score<<"/3";

    return 0;
}