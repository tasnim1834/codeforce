#include<iostream>
using namespace std;

int main()
{
    int t,a,b,z,high;
    z=0;
    high=0;
    cin>>t;
    while(t--){
    cin>>a>>b;
    z=z+(b-a);
    if(z>=high){
        high=z;
    }

    
}
cout<<high<<endl;
    return 0;
}