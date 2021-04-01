///1498A. GCD Sum
///#711 Div-2

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long long n,x,a;
	cin>>t;while(t--)
	{
		cin>>n;
		for(long long tmp=n;;tmp++)
		{
			a=tmp,x=0;
			while(a)x+=a%10,a/=10;
			if(__gcd(tmp,x)!=1){cout<< tmp <<endl;break;}
		}
	}
}






