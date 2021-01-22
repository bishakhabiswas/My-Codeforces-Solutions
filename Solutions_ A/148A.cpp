///148A_Insomnia Cure///
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d,count=0;
    cin>>k>>l>>m>>n>>d;
    for(int i=1;i<=d;i++)
    {
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0 ) /// i er je man guloke k,l,m,n er man dara vag korle jodi vagses 0 hoy tobe sei man guloi k,l,m,n er gunitok.gunitok guloi harmed dragon er songkha...
        {
            count++;
        }
    }
    cout<<count;
}
