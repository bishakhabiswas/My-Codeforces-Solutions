///1343B. Balanced Array

/// = +
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {



        int n,sum1=0,sum2=0;
        cin>>n;

        if(n%2==0)
        {


            if(n%4==0)
            {
                cout<<"YES"<<endl;

                vector<int> array;
                array.push_back(2);
                for(int i=1; i<=n; i++)
                {
                    if(i%2==0)
                    {
                        array.push_back(i);

                    }
                }

                for(int i=1; i<=n; i++)
                {
                    if(i%2!=0)
                    {
                        array.push_back(i);
                        sum2 += i;
                    }
                }


                for(int i=1; i<=array.size()/2; i++)
                {
                    sum1 += array[i];
                }
                int c = sum1-sum2;
                int x = array.back() +c;
                array.back() = x;


                for(int i=1; i<=n; i++)
                {

                    cout<<array[i]<<" ";
                }
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }

        else
        {
            cout<<"NO";
        }
    }
}
