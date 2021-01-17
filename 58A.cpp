#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    string a="hello" ;
    cin>>s;
    int x=0,y=0;

    for(int i=0;i<s.size();i++)
    {
     if(s[i]==a[x])
        {
            x++;
            y++;
        }
    }
    cout<<x;
    if(y==5)


    cout<<"YES"<<endl;
    else
        cout<<"NO";
}
