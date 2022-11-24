#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    int t;
    ll n;
    cin>>t;

     while(t--){
        cin>>n;

        ll wait=n&(n-1);
            if(wait==0){
                cout<<"NO"<<endl;
            } else{
                cout<<"YES"<<endl;
            }
     }



}










