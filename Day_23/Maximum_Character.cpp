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
    char max=s[0];
    int mfreq=freq[s[0]];
    for(int i=1;i<s.length();i++)
        if(freq[s[i]]>mfreq)
        {
            mfreq=freq[s[i]];
            max=s[i];
        }
    cout<<"Maximum occurring character: "<<max;

    return 0;
}