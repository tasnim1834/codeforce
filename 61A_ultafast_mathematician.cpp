#include<bits/stdc++.h>
using namespace std;

int main(){
  int i,j;
  string s,t,u,z;
  cin>>s>>t;

  int l= s.size();

  for(i=0,j=0; i<l ,j<l; i++,j++){
    if(s[i]!=t[j]){
        u=u+'1';
        
    }
    else{
        u=u+'0';
    }


  }

  cout<<u;
}

