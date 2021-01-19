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
        cout<<"Anton";
    }
    if(count1<count2)
    {
        cout<<"Danik";

    }
    if(count1==count2)
    {
        cout<<"Friendship";
    }
}
