#include<bits/stdc.h>
using namespace std;
ios_base::sync_with_stdio(false)
cin.tie(NULL);
solve();
return 0;



   ///string er space prblm slv korar jnno >>>getline(cin,s,'.')
///delimetor

/*
string s;

    string t="thistttatext";
    string key="ttt";

    string line="......C...A....";
    int a=0,c=0,d=0;

    int l=line.length();

    for(int i=0; i<l; i++)
    {
        if(line[i]=='.')
        {
            d++;
        }
        else if(line[i]=='A')
        {
            a++;
        }
        else
        {
            c++;
        }
    }

    cout<<"A->"<<a<<" C->"<<c<<" Dot->"<<d<<endl;

    vector<string>str;

    str.push_back("Vector string");

    cout<<"str->"<<str
    */

    /*/**
 *    author:  Sarfaraz
 *    Topic:   STRING
**/

/* #include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;

bool isSubset(string text,string sub){

    int i=text.length()-1;
    int j=sub.length()-1;

    while(i>=0 && j>=0){
        if(text[i]==sub[j]){
            i--;
            j--;
        }else{
            i--;
        }
    }

    if(j==-1){
        return true;

    }else{
        return false;
    }

}

void solve()
{

 string text,sub;

 cin>>text>>sub;

if(isSubset(text,sub)==true){
    cout<<"Yes"<<endl;
}else{

    cout<<"No"<<endl;
}

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

 */

 /*/**
 *    author:  Sarfaraz
 *    Topic:   STRING
**/
/*
#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;

bool isSubset(string text,string sub){

    int i=text.length()-1;
    int j=sub.length()-1;

    while(i>=0 && j>=0){
        if(text[i]==sub[j]){
            i--;
            j--;
        }else{
            i--;
        }
    }

    if(j==-1){
        return true;

    }else{
        return false;
    }

}

void solve()
{

 string text,sub;

 cin>>text>>sub;

if(isSubset(text,sub)==true){
    cout<<"Yes"<<endl;
}else{

    cout<<"No"<<endl;
}

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

*/


/*#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;

void solve()
{
    string s[1];

    string t="thistttatext";
    string key="ttt";

    getline(cin,s,'?');

    cout<<s<<endl;



    string line="......C...A....";
    int a=0,c=0,d=0;

    int l=line.length();

    for(int i=0; i<l; i++)
    {
        if(line[i]=='.')
        {
            d++;
        }
        else if(line[i]=='A')
        {
            a++;
        }
        else
        {
            c++;
        }
    }

    cout<<"A->"<<a<<" C->"<<c<<" Dot->"<<d<<endl;

    vector<string>str;

    str.push_back("Vector string");

    cout<<"str->"<<str[0]<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

*/
