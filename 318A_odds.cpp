#include<bits/stdc++.h>
using namespace std;
int main(){

    long long n,k;
    cin>>n>>k;
    
    long long z= ceil(n/2.0);
    

   if(k<=z){
        cout<<(2*k -1);
    }else{
        cout<<(k-z)*2;
    }
}
