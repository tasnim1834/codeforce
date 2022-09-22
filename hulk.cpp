#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
 int a,i;
 cin>>a;

 for(i=1;i<a;i++){
   if(i%2!=0){
      cout<<"I hate that ";

   }
   else{
      cout<<"I love that ";
   }

 }

 if (a%2!=0){
   cout<<"I hate it";

 }else{
   cout<<"I love it";
 }
return 0;
}