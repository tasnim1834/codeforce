
#include<bits/stdc++.h>
using namespace std;
int main(){

   int n,i,x,y;
   x=0;
   y=0;

   cin>>n;

   string st;

   cin>>st;
   

     for(i=0;i<st.length();i++){
        if(st[i]=='A'){
        x=x+1;
    }
    else{
        y=y+1;
    }
   }

        if(x>y){
        cout<<"Anton";
         }else if(y>x){
        cout<<"Danik";
         }
        else{
        cout<<"Friendship";
         }

    return 0;
   }





