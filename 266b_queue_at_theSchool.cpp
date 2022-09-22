#include<bits/stdc++.h>
using namespace std;

int main(){
   int j,u,l;
   j=0;
   cin>>u>>l;
   string s;

   cin>>s;

    for(int i=0; i<l;i++){
    
      while( j<s.size()-1){
        if(s[j]=='B' && s[j+1]=='G'){
          swap(s[j],s[j+1]);
          j=j+2;
        }
        else{
          j=j+1;
        }
      }
    }
    

    cout<<s<<endl;

    return 0;
   }

    
