#include<bits/stdc++.h>
using namespace std;

int main(){
  
   int n,count,tout;
   count=0;
   tout=0;
   cin>>n;

   int ar[n];
   for(int i=0;i<n;i++){
     cin>>ar[i];
   } 

   for(int i=0; i<n-1;i++){
    if(ar[i]<ar[i+1]){
        swap(ar[i],ar[i+1]);
        count++;
    }
   }

   for(int j=n-1;j<n;j--){
    if(ar[j]>ar[j-1]){
        swap(ar[j],ar[j-1]);
        tout++;
    }
    
   }

   int z= count+tout;

   cout<<z;

}