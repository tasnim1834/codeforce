
#include<iostream>
#include<math.h>
using namespace std;

int factorial(int n){
    int product=1;

       for (int i=2;i<=n;i++){
          product=product*i;

      }

      return product;

      }

int main(){

  int n;
  cin>>n;

 int ans= factorial(n);
 cout<<ans<<endl;




  return 0;





}
