#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,count,temp;
    count=0;
    temp=0;
    cin>>n;

    int ar[n];

    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

   
   for(int i=0;i<(n-1);i++){
    if(ar[i]<=ar[i+1]){
        count++;
    }
    else{
      
        if(count>temp){
            temp=count;
            count=0;
        }
        else{
            count=0;
        }
    }

   }
   if(count>temp)
         cout<<(count+1);
    else  cout<<(temp+1);

}    