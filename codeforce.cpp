#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,count1=0,count2=0;
    cin>>a;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A')
        {
            count1++;
        }

        else
        {
            count2++;

        }
    }
    if(count1>count2)
    {
        cout<<"ANTON";
    }
    if(count1<count2)
    {
        cout<<"DANIM";

    }
    if(count1==count2)
    {
        cout<<"FRIENDSHIP";
    }
}
