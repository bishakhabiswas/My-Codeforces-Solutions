///1360A. Minimal Square

#include<bits/stdc++.h>
using namespace std;
int main()
{  int t,side=0,p,q;
   cin>>t;
   while(t--)
  {
    int a,b;
    cin>>a>>b;
    p =max(a,b);
    q =min(a,b);

    int q2= q*2;

    if(p>q2)
    {
         side = p;
    }
    else{
             side = q2;

    }
    cout<< side*side <<endl;

  }

}


