#include<bits/stdc++.h> /// =
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        int num2=a/2,num1=a%2;
        //int  value = abs(num2-num1);
        while(abs(num2-num1)>1)
        {
            num2-- ,num1+=2;

        }
        if(num1>num2)
        {
            cout<<1;
            for(int i=0;i<num2;i++)

                cout<<2<<1;
                cout<<endl;

        }

       else  if(num2>num1)
        {
            cout<<2;
            for(int i=0;i<num1;i++)

                cout<<1<<2;
                cout<<endl;


        }
        else
        {
             for(int i=0;i<num1;i++)

                cout<<2<<1;
                cout<<endl;

        }

    }
    return 0;

}
