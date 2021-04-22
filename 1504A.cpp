///1504A. Déjà Vu

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000000];
    cin>>s;
    int a;
    int length =0;
int    flag =0;
    length=strlen(s);
    for(int i=0;i<length;i++)
    {
        if(s[i]==s[length-1-i])
        {   s[i]=a;

            flag=1;
            length++;
            break;

        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else{cout<<"NO"<<endl;}
}
