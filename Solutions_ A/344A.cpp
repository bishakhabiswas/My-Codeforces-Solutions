#include<iostream>
using namespace std;
int main()
{
    int n,count=1;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(A[i]!=A[i+1])
        {
            count++;
        }
    }
    cout<<count;

}
