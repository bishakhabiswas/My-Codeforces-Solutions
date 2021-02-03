///141A. Amusing Joke
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c,d;
    cin>>a>>b>>c;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());

    d = a+b;
    sort(d.begin(),d.end());

    if(c==d)
    {
        cout<<"YES"<<endl;

    }
    else{
        cout<<"NO"<<endl;
    }
}
