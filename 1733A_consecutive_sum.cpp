#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k,sum;
    sum=0;
    

    cin>>t;

    while(t--){
        cin>>n>>k;
    
    for(int i=0;i<n;i++){
        int ar[n];
        cin>>ar[i];
    }

    if(n==k){
        for(int i=0;i<n;i++){
            sum=sum+ar[i];
        }   
    } else{
        for(int i=0;i<n;i++){
            int ar2[i]=ar[i]%k;
        }
    }
}