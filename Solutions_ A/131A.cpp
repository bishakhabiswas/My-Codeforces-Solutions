#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count1=0,count2=0;

    for(int i=1;i<s.size();i++)
    {
        if(islower(s[i]))
        {
            count1++ ;
        }
    }
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
        {
            count2++;
        }
    }

        if(islower(s[0]) && count1==0)
        {
            s[0]=toupper(s[0]);
            for(int i=1;i<s.size();i++)
            {
                s[i]=tolower(s[i]);
            }
            cout<<s;
            return 0;

        }

        if(count2==s.size())
        {
            for(int i=0;i<s.size();i++)
            {
                s[i]=tolower(s[i]);
            }
            cout<<s;
        }

        else{
            cout<<s;
        }
    }


