///1499A. Domino on Windowsill

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,k1,k2,w,b;
    cin>>t;
    while(t--)
    {
       cin>>n>>k1>>k2;
       cin>>w>>b;
     int TW = k1+k2;
    int  TB =(2*n)- TW ;
       if(TW>=(2*w) && TB>=(2*b) )
       {
           cout<<"YES"<<endl;
       }
       else{cout<<"NO"<<endl;}


    }
}
