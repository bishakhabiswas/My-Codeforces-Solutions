#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    reverse(s.begin(),s.end()) ;
    if(s==t)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
}




  /*  string s,t;
    cin>>s>>t;
    int count = 0;

    for(int i=0,j=t.size();i<s.size(),j>=0;i++,j--)
    {


            if(s[i]==t[j])
            {
                count++;
            }

    }
    cout<<count;
    if(count==s.size())
    {
        cout<<"YES";
    }

}*/






