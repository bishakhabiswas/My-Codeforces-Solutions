///1475A_Odd Divisor #697(Div.3)

#include<iostream>
using namespace std;
int main()
{
  long long  int t,i,j,p,n;
    cin>>t;
    while(t--)
    {  cin>>n;
        if(n%2==1) cout<<"YES"<<endl;
        else{
            p=n;
            while(p%2==0){

                p=p/2;}

                if(p>1) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;

        }
    }

}

