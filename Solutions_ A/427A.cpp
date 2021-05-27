#include<bits/stdc++.h>
using namespace std;
int main()
{
    int P = 0; //p =police
    int C = 0;//c =crime
    int n,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        if(n>0)
        {
            P = P+n;

        }
        else if (n<0)
        {
            if(P>0)
            {
                P = P-1;
            }
            else{
                C =  C+1;
            }
        }
    }
    cout<<C<<endl;

}
