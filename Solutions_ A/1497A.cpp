///1497A. Meximization

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n;
    cin>>t;
    while(t--)
    { cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {  a[n]++ ;
              a[n+1] = a[i];
            a[i] = a[i+1];
        }
    }
     for(int i=0;i<n;i++)
    {
    cout<<a[i]<<" ";
    }

    }


}
