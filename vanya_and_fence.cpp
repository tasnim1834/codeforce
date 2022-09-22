#include<iostream>

using namespace std;

int main(){

  int t,h,n,z;
  z=0;

  cin>>t>>h;

  for(int i=0; i<t; i++){
    cin>>n;
    if(n>h){
        z=z+1;
    }

  }
  
  int ans=t+z;

  cout<<ans<<endl;


  return 0;

}