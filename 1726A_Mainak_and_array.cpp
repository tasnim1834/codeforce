#include<bits/stdc++.h>
using namespace std;

int main(){

    int t,n;

    cin>>t;

    while(t--){
        cin>>n;

        int ar[n];

        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        if(n==1){
            cout<<"0"<<endl;

        }
        else{
            sort(ar,ar+n);
             int z= ar[n-1]-ar[0];
                cout<<z<<endl;

        }
        
        

}

}