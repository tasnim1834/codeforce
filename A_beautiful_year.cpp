#include<iostream>

using namespace std;

int main(){
   int n,result;
   cin>>n;

   while(n++){

  int a=(n/1000);
  int b=((n/100)%10);
  int c=((n/10)%10);
  int d=(n%10);

  if(a!=b && b!=c && c!=d && a!=c && a!=d && b!=d ){
     result=n;
    break;
  } 
   
   }
   cout<<result<<endl;
   return 0;

   }

