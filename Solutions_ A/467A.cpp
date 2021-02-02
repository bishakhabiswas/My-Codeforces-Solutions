///467A_ George and Accommodation

#include<iostream>
using namespace std;
int main()
{
    int t,p,q,count=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>p>>q;
       if(q-p>=2)
        {
        count++;
       }


       }
      cout<<count<<endl;
}
