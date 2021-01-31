///520A_Pangram

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,count=0;
    cin>>t;
    string s;
    cin>>s;
    for(int i=0;i<t;i++)
    {
        s[i]=towlower(s[i]);
    }
        sort(s.begin(),s.end());
        for(int i=0;i<t;i++)
        {
            if(s[i]!=s[i+1])
            {
                count++;
            }
        }
        if(count==26)
        {
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }


}

