#include<bits/stdc++.h>
using namespace std;

int main(){
   string s,t,u;

   cin>>s>>t;
   
  u= reverse(s.begin(),s.end());
   
   if(t==u){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }

    return 0;
   }

    