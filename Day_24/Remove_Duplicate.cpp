#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
    string s,word,ans="";
    cout<<"Enter a string: ";
    getline(cin,s);
    stringstream ss(s);
    while(ss>>word)
    {
        string temp=" "+ans+" ";
        string check=" "+word+" ";
        if(temp.find(check)==string::npos)
        {
            if(ans!="")
                ans+=" ";
            ans+=word;
        }
    }
    cout<<"String after removing duplicate words: "<<ans;

    return 0;
}