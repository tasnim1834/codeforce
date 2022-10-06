#include<bits/stdc++.h>
using namespace std;
int main(){
   string str;

   cin>>str;
   int n= str.size()-1;
   
   int m=n-1;

   
   
   if (str[0] !='-'){
     cout<<str;
   }

   else{
       if(str[m]>str[n]){
         str.erase(m,1);
          
           if(str[1]=='0'){
             cout<<"0";
           }else{
          cout<<str;}
       }
         
         else{
            str.erase(n,1);
           
           if(str[1]=='0'){
             cout<<"0";
           }else{
          cout<<str;}
         }
   }


}







