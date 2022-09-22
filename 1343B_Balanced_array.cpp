#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,s,sum,odd,tr;
    sum=0;
    odd=0;
    tr=0;
    cin>>t;
   while(t--){
        sum=0;
        odd=0;
        cin>>n;
         s=(n/2);

      if(s%2!=0){
        cout<<"NO"<<endl;
      }

      else{
        cout<<"YES"<<endl;
        for(int i=2;i<=n;i=i+2){
          sum=sum+i;
          cout<<i<<" ";

        }

        for(int i=1;i<n-2;i=i+2){
             odd=odd+i;
             cout<<i<<" ";

        }

         tr= sum-odd;
        cout<<tr<<endl;
         tr=0;
      }

   }
}


