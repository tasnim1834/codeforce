#include<bits/stdc++.h>

using namespace std;

int main(){


    int n,m;

    cin>>n>>m;

    int i=1;
    int count=0;

     for(; ;){
        if(m-i==0)break;
        if(n-i==0)break;
        i++;
        count++;
     }
       if(count%2 !=0 ) 
           {cout<<"Malvika";
       } 
       else{
            cout<<"Akshat";
       }
    }










