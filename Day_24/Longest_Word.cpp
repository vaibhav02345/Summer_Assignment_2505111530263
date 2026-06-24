#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s,word="",longest="";
    cout<<"Enter a string: ";
    getline(cin,s);
    s=s+' ';
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
            word+=s[i];
        else
        {
            if(word.length()>longest.length())
                longest=word;
            word="";
        }
    }
    cout<<"Longest word: "<<longest;

    return 0;
}