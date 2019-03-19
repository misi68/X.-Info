#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

    int aux,i,j,n,V[1000],szorzat=1;

    cin >>n;

    for(i=0;i<n;i++){

      V[i]=rand()%(n*10);

    }


    for(i=0;i<n-1;i++){
     for(j=i+1;j<n;j++){

       if(V[i]>V[j]){

            aux=V[j];
            V[j]=V[i];
            V[i]=aux;
          }



     }

    }


        cout <<V[3]<<endl;
        cout <<V[n-2]<<endl;




      szorzat=szorzat*V[3]*V[n-2];
      cout<<szorzat<<endl;





    return 0;
}
