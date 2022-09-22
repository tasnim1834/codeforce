#include<bits/stdc++.h>
using namespace std;

int main(){
   int i,j,count,ct;
   count=0;
   ct=0;
   string s;
   cin>>s;

   sort(s.begin(),s.end());

   for(i=0;i<s.size();i++){
    
         if (s[i]!=s[i+1]) {

            count++;
         }
     
   }

   if(count%2==0){
    cout<<"CHAT WITH HER!";
   }

   else{
    cout<<"IGNORE HIM!";
   }

}
   
 