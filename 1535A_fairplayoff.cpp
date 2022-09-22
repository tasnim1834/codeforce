#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a,b,c,d;
    int t;
    cin>>t;
    while(t--){
       cin>>a>>b>>c>>d;
       int max1= max(a,b);
       int min1=min(a,b);
       int max2=max(c,d);
       int min2=min(c,d);

       if(min1>max2 || min2>max1){
        cout<<"NO"<<endl;
       }else{
        cout<<"YES"<<endl;
       }
}
}