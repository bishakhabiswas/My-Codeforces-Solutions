///1374A. Required Remainder

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ,x,y,n,k,p;
    cin>>t;
    while(t--)
    {


    cin>>x>>y>>n;
     p = (n-y)/x;
     k = x*p+y;
     cout<<k<<endl;
    }

}
