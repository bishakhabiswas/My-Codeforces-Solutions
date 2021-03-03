///Welcome Back in My Coding life after 18 days because of Midterm examination

///4C. Registration system


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    map <string,int> reg;
    for(int i=0;i<t;i++)
    {  cin>>s;
        if(reg[s]==0)
        {
            reg[s]=1;
            cout<<"OK"<<endl;
        }
        else
        {
            cout<<s<<reg[s]<<endl;
            reg[s]++;
        }
    }
}
