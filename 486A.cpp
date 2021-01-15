#include<iostream>
using namespace std;
int main()
{
    long long int n,a;
    cin>>n;

        if(n%2==0)
        {
           cout<<n/2;
        }
        else{
            a=-(n/2 +1);
            cout<<a;
        }

}
