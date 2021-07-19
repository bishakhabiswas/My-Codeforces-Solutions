#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> vec(101);
    for(int i =0;i<n;i++)/// =
    {
        int a;
        cin>>a;
        vec[a]++;

    }
    cout<< *max_element(vec.begin(),vec.end());
    return 0;
}
