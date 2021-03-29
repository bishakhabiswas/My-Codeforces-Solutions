#include<bits/stdc++.h>
#include<numeric>
using namespace std;
int main()
{
    int t,x,gcd;

    cin>>t;
    int sum=0;
    while(t--)
    {
        int n;
        cin>>n;
       int p=n;
        while(p)
        {

        x= n%10;
        p = p/10;
        sum +=x;
        }
       // cout<<sum<<endl;
        for(int i=1;i<=sum;i++)
        {
            if(sum%i==0 && n%i==0)
            {
                gcd =i;
            }
        }

        if(gcd==1)
        {
            n++;
            cout<<n<<endl;
        }

          else if (gcd>1)
        {
            cout<<n<<endl;
        }

}
}






