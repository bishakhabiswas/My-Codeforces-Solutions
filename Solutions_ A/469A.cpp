#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,count=0,arr[1000];
    cin>>t>>x;

    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    cin>>y;
    for(int i=x;i<x+y;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+(x+y));

    for(int i=0;i<x+y;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            count++;
        }
    }
    if(count==t)
    {
        cout<<"I become the guy.\n";
    }
    else
    {
        cout<<"Oh, my keyboard!\n";
    }


}
