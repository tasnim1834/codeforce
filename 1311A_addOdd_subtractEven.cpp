#include<bits/stdc++.h>

using namespace std;


 
int main()
{
    int t,a,b,x,y;
    cin>>t;
    while(t--){
    
       cin>>a>>b;
       x=a%2;
       y=b%2;
    
    if(a==b){
      cout<<"0"<<endl;
    } else{
    
       if(x==0 && y==0){
         if(a<b){
        cout<<"2"<<endl;
        } else{
        cout<<"1"<<endl;}
    }
    
    if(x!=0 && y!=0){
      if(a<b){
    cout<<"2"<<endl;} 
      else {
    cout<<"1"<<endl;
    }
    
    }
    
    if(x!=0 && y==0){
    
      if(a<b){
         cout<<"1"<<endl;
    } else{
        cout<<"2"<<endl;
    }
    
    }
    
    if(x==0 && y!=0){
    if(a>b){
    cout<<"2"<<endl;}
    else{
    cout<<"1"<<endl;}
    
    
    
    
    
    }
    
    
    }
 
}
}