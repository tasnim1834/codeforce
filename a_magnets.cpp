#include<iostream>
#include<string>

using namespace std;

int main(){
    int t,n;
    n=1;
    cin>>t;
    int ar[t];

    for(int i=0;i<t; i++){

        cin>>ar[i];
    }

    for( int  j=0; j<(t-1); j++){
        if(ar[j]!=ar[j+1]){
            n=n+1;
        }
    }

    cout<<n<<endl;
    return 0;

