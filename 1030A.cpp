#include<iostream>
using namespace std;
int main()
{
    int  n,count1=0,count2=0;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
        if(A[i]==0)
        {
            count1++;
        }
        if(A[i]==1)
        {
            count2++;
        }
    }
    if(count2==1)
    {
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }

}
