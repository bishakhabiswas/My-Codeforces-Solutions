#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

ll t;
cin>>t;
read:
while(t--)
{
    ll n;
    cin>>n;
    ll a[n+1];
    for(ll i-1;i<-n;i++)
    {
        if(a[i]>a[i-1]&&a[i+1])
        {
            cout<<"YES"<<endl;
            cout<<i-1<<" "<<i+1<<endl;
            goto read;
        }

    }
    cout<<"NO"<<endl;
}
}
