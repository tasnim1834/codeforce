#include<iostream>
using namespace std;
int main(){

   int n,a,sum;
   sum=0;
   cin>>a;


   for (int i=0; i<a; i++){
          cin>>n;
          sum= sum+n;
      }

   

   if(sum==0){
    cout<<"EASY"<<endl;
   }

   else{cout<<"HARD"<<endl;
        }



    return 0;
}
