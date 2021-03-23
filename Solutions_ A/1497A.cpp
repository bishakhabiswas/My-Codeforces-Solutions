///1497A. Meximization
///#708 Div-2

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,p;
    cin>>t;
    while(t--)
    { cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    vector <int> vec;
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {  vec.push_back(a[i]);
        }
        else
            {
            cout<<a[i]<<" ";
        }


        }


     for(int i=0;i<vec.size();i++)
    {
    cout<<vec[i]<<" ";
    }
    cout<<endl;
    }
    }



