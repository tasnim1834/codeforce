#include<bits/stdc++.h>
using namespace std;

int main(){
  
   int t,a,b,c;
   cin>>t;

   while(t--){

     cin>>a>>b>>c;

     if(a==1){
        cout<<"1"<<endl;
     }else{
        if(b==1){
            cout<<"3"<<endl;
        }
        else{
            if(a==2 && b==3)
            cout<<"1"<<endl;
            else{
                cout<<"2"<<endl;
            }
        }
     }
   }
  
  

 



}