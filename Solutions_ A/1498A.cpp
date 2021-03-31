///1498A. GCD Sum
///#711 Div-2



#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;

    return gcd(b,a%b);
}
int main()
{
     int t,x,c,q,n,res=0,res1=0;

    cin>>t;
   int sum;
    while(t--)
    {
        int n;
        cin>>n;
       int p=n;
        while(p)
        {

        x= p%10;
        sum +=x;
        p = p/10;
        }

        while(res1<=1)
        {
            res=sum;
            res1= gcd(n,res);
            if(res1<=1)
            {
                n=n+1;
            }
        }


 cout<<n<<endl;

}

}










