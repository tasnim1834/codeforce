#include<bits/stdc++.h>
using namespace std;

int main(){

  int count=0;
  int ar[4];
  for(int i=0;i<4;i++){
    cin>>ar[i];
  }

   sort(arr,arr+4);
    for(int j=0;j<3;j++){
        if(ar[j]==ar[j+1]){
            count++;
        }
    }
   
   cout<<count;
}
