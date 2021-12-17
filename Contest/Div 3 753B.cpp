#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t,x,n;
    cin>>t;
for(int p=0;p<t;p++)
    {
        cin>>x>>n;
    for(int i=1;i<=n;i++)
    {
        if(x%2==0)
        {
            x= x-i;
        }
        else {
                x = x+i;
        }

    }
    cout<<x<<endl;
    }
    return 0;

}
