///1359A. Berland Poker



#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        ll x=n/k;
        if(x>=m) cout<<m<<endl;
        else{
            ll q =((m-x)/(k-1)); ///q = onnoder kache highest joker er songkha
            if((m-x)%(k-1)!=0)  q++;


        cout<<x-q<<endl;
        }

    }
}
