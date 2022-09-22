#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,i;
  double  sum=0;
  cin>>n;

  double ar[n];

  for( i=0;i<n;i++){
    cin>>ar[i];
  }

 for (i=0;i<n;i++){

   sum= sum+ ar[i]/100;
 }

 double d= ((sum)*100)/n;

 printf("%.14lf",d);
}
