#include<iostream>
using namespace std;
int main()
{
    int a,i;
    cin>>a;
    int c=0;
    for( i=0;i<a;i++)
    {
        if(a[i]==4||a[i]==7)
        {
            c++;
        }
    }
    cout<<c;
}
