///1409 A. Yet Another Two Integers Problem



#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll x = abs(a-b);
        cout<<x/10+(x%10!=0)<<endl;
    }
}

