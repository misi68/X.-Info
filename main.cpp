#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x,i,n=10000,y;
    int v[n];

    cin >>x;
    cin >>y;

    ofstream out("bac.txt");

    v[1]=0;
    v[2]=3;

    i=2;


    while(v[i]<y){

      i=i+1;
      v[i]=2*v[i-1]-v[i-2]+2;

    }
    n=i;

    for(i=n;i>0;i--){

      out << v[i]<<"  ";

    }

    return 0;
}
