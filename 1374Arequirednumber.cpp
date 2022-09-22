#include<iostream>
using namespace std;
int main(){

  int t,a,b,c;

  cin>>t;

  while(t--){
    cin>>a>>b>>c;
    int d= ((c-b)/a);
    if(c%a==b){
        cout<< c <<endl;
    }
    else{cout<< ((d*a)+b)<<endl;
    }
  }










    return 0;
}