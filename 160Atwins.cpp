#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,sum1,sum2,count;
    count=0;
    sum1=0;
    sum2=0;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    for(i=n-1;i>=0;i--){
        sum1=0;
        for(j=0;j<i;j++){
            sum1=sum1+ar[j];
        }
          
    sum2=sum2+ar[i];
    count++;
        if(sum2>sum1){
            break;
        }
    }
    cout<<count;
    }
    
    

