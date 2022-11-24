#include<bits/stdc++.h>
using namespace std;

int main(){

    int k,sum,count;
    sum=0;
    count=0;
        cin>>k;

        int ar[12];

        for(int i=0;i<12;i++){
            cin>>ar[i];
        }

        sort(ar,ar+12);

       if(k==0){
         cout<<"0";
       }
        else{
            for(int i=11;i>=0;i--){
           sum=sum+ar[i];
           count++;
           if(sum>=k){
            break;
           }
        }
       
     if(sum>=k){
        cout<<count;
     }else{
        cout<<"-1";
     }

}    
}