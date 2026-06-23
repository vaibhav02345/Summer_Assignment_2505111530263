#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    int freq[256]={0};
    for(int i=0;i<s.length();i++)
        freq[s[i]]++;
    for(int i=0;i<s.length();i++)
        if(freq[s[i]]>1)
        {
            cout<<"First repeating character: "<<s[i];
            return 0;
        }
    cout<<"No repeating character found";

    return 0;
}