#include<iostream>
using namespace std;

int main(){

   int k,n,w,sum;
   sum=0;
   cin>>k>>n>>w;

   for(int i=1;i<=w;i++){
      sum= (sum+ i*k);
   }

   if(sum>n){
    int x= (sum-n);

    cout<<x<<endl;

   }
   else {
    cout<<"0"<<endl;
   }


    return 0;

}