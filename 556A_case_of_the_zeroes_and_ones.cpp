#include<bits/stdc++.h>
using namespace std;

int main(){

    int t,count,round,result;
    count=0;
    round=0;

    cin>>t;

        string s;
        cin>>s;

     for(int i=0;i<t;i++){
       
          if(s[i]=='0')
             {
                count++;
             } 
          else{
            round++;
          }             

     }

       result= abs(count-round);

       cout<<result;

}    
