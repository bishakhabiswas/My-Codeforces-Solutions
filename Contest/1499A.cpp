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
     long long  white = k1+k2;
    long long   black =(2*n)- white ;
       if(white>=(2*w) && black>=(2*b) )
       {
           cout<<"YES"<<endl;
       }
       else{cout<<"NO"<<endl;}

     /*   if(k1+k2>w && k1+k2>b)
        {
          cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }*/

    }
}
