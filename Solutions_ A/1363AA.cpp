#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        ll n,x;

        cin>>n>>x;
        ll odd=0,even=0;

        for(ll i =1; i<=n; i++)
        {
            ll p;
            cin>>p;
            if(p%2!=0)
                odd++;
            else
                even++;
        }
        if(odd!=1)
            cout<<"No"<<endl;
        else
        {
            x--;
            odd--;
            while(x!=0)
            {
                if(odd>=2 && x>=2)
                    odd-=2,x-=2;
                else if(even)
                    even--,x--;
                else
                    break;

            }
            if(x)
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;


        }
    }
}
