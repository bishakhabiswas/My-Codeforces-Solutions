///1367 B. Even Array

///    =   +
#include<bits/stdc++.h>
using namespace std;
int main()
{


	int t;
	cin>>t;
	while(t--){
		int n,num;
		cin>>n;
		int e=0,o=0;
		for(int i=0;i<n;i++){
			cin>>num;
			if(i%2!=num%2){
				if(i%2)o++;
				else e++;
			}
		}
		if(e==o)cout<<e<<"\n";
		else cout<<"-1\n";
}
}
