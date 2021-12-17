#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    { ll n;
    cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++)
            {
            ll x = abs(a[i]);
        if(i%2!=0) cout<<-x<<" ";
        else cout<<x<<" ";
        }

        cout<<endl;

    }
    return 0;
}
