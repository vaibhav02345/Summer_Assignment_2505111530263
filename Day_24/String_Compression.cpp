#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s,ans="";
    cout<<"Enter a string: ";
    cin>>s;
    int c=1;
    for(int i=0;i<s.length();i++)
    {
        if(i<s.length()-1 && s[i]==s[i+1])
            c++;
        else
        {
            ans+=s[i];
            ans+=to_string(c);
            c=1;
        }
    }
    cout<<"Compressed string: "<<ans;

    return 0;
}