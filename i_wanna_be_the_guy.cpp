#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int f,p,q,count;
    int ar[250];
    count=0;

    cin>>f>>p;

    for(int i=0;i<p;i++){
        cin>>ar[i];
    }

    cin>>q;
    for(int i=p;i<(p+q);i++){
        cin>>ar[i];
    }

    sort(ar,ar+(p+q));

    for(int i=0;i<(p+q)-1;i++){
        if(ar[i]!=ar[i+1]){
            count++;
        }
    }

      int t=count+1;
        if(p==0 && q==0){
            cout<<"Oh, my keyboard!"<<endl;
    }
    
        else{
            
        if(t==f){
            cout<<"I become the guy."<<endl;
    }   else{
            cout<<"Oh, my keyboard!"<<endl;
    }
        }
    return 0;
}   
