///25A_IQ test

#include<iostream>
using namespace std;
int main()
{
    int n,o=0,e=0;///o= Odd,e=Even
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            e++;
        }
        else{
            o++;
        }

    }
    if(e>o)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
            {
                cout<<i+1;
            }
        }
    }


    if(o>e)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                cout<<i+1;
            }
        }
    }
}
