///460A. Vasya and Socks

#include<iostream>
using namespace std;
int main()
{  int n,m,a;
   cin>>n>>m;
   for(int i=1; m*i<= n;i++)
   {
       n++;
   }
   cout<<n<<endl;

}
