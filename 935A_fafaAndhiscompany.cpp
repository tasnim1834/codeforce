#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,z,sum;
    sum=0;

    cin>>n;

    for(int i=1;i<n;i++){
        z=n-i;
        if(z%i==0){
            sum=sum+1;
        }
    }

    cout<<sum;

}
