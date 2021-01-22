#include<bits/stdc++.h>
using namespace std;
int main()
{
    int stdnt,nop,m=0,ans;///nof=number of puzzels
    cin>>stdnt>>nop;
    int arr[nop];
    for(int i=0;i<nop;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+nop);
    m=arr[nop-1]-arr[0];
    for(int i=stdnt;i<=nop;i++)
    {
        ans=arr[i-1]-arr[i-stdnt];
        ans=abs(ans);
        m=min(m,ans);
    }
    cout<<m;

}
