#include<iostream>
using namespace std;

int main(){

int t,number,sum=0,remainder;
cin>>t;

while(t--){
    cin>>number;
    sum=0;

  while(number>0){
    remainder= (number%10);
    sum = sum+ remainder;

    number= (number/10);

  }

    cout<<sum<<endl;




}


return 0;


}
