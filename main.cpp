#include <iostream>

using namespace std;

int main()
{
    int V[100],N,M,i,D[100],S=0,uszam,ujszam=0,tar;

    cout << "N=";
    cin >>N;
    tar=S;





    for(i=0;i<N;i++){


      cin>>V[i];
    }

  cout <<"M=";
   cin >>M;

    for(i=0;i<M;i++){

      cin>>D[i];

    }

    if(N>M){
     for(i=0;i<M;i++){
        if(V[i]==D[i]){
          S=S+V[i];
        }
       }
     }
     if(N<M){
      for(i=0;i<N;i++){
        if(V[i]==D[i]){
          S=S+V[i];
      }
     }
     }

      if(N==M){
      for(i=0;i<N;i++){
        if(V[i]==D[i]){
          S=S+V[i];
      }
     }
     }


   while(S>0){


    uszam=S%10;
    ujszam=ujszam*10+uszam;
    S=S/10;



   }


   if(tar==ujszam){

    cout<<tar;

   }








    return 0;
}
