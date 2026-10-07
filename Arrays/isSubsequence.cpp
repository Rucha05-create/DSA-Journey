#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s,t;

    cout<<"Enter string to be searched : ";
    cin>>s;

    cout<<"Enter actual string : ";
    cin>>t;

    int i=0;
    int j=0;

    while(i<s.length() && j<t.length())
    {
        if(s[i]==t[j])
        {
            i++;
        }
        j++;
    }
   
    if(i<s.length())
    {
        cout<<"True"<<endl;

    }
    else
    {
        cout<<"False"<<endl;
    }

}