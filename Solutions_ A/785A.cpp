///785A. Anton and Polyhedrons

#include<iostream>
using namespace std;
int main()
{
    int t, sum=0;
    cin>>t;
    string arr[t];
    for(int i=0;i<t;i++)
    {
            cin>>arr[i];

      if( arr[i]== "Tetrahedron")
      {
          sum+=4;
      }
      else if( arr[i]== "Cube")
      {
          sum+=6;
      }
    else  if( arr[i]== "Octahedron")
      {
          sum+=8;
      }
    else  if( arr[i]== "Dodecahedron")
      {
          sum+=12;
      }
    else  if( arr[i]== "Icosahedron")
      {
          sum+=20;
      }


    }
    cout<<sum<<endl;

}

