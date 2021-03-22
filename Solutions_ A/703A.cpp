///703A. Mishka and Game

#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,mishka,chris,a=0,b=0;
    cin>>n;
    while(n--)
   {
       cin>>mishka>>chris;
       if(mishka>chris)
       {
           a++;

       }
       else if(chris>mishka)
       {
           b++;
       }
   }
   if(a>b)
      {
         cout<<"Mishka"<<endl;
      }
        else if(b>a)
        {
            cout<<"Chris"<<endl;
        }
        else{
            cout<<"Friendship is magic!^^"<<endl;
        }

}
