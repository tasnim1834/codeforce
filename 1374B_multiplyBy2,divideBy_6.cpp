#include<bits/stdc++.h>

using namespace std;

int main(){

   int t,n,count;
    
    cin>>t;


   while(t--){
        
        cin>>n;
         count=0;
        while(n!=1){
         
        if(n==2 || n==12|| n==72 || n==432){
             count=-1;
             break;
        }
           if(n%6!=0){
                n=n*2;
                count++;
            }
                 else{
                n=n/6;
                count++;
                 }

        if(n==2 || n==12|| n==72 || n==432){
             count=-1;
             break;
        }
        

       cout<<count<<endl;


   }    


} 


}