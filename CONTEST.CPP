#include<iostream>

using namespace std;

int main(){

int i,t,n,m;

cin>>t;

while (t--){

    cin>>n;
     m=(n/3);
 if(n==1){
    cout<< "2"<< endl;
 }
 if (n>1 & n%3==0){
    cout << m <<endl;
  }
  if(n>1 &n%3==1){
    cout<< m+1<<endl;
  }
  if(n>1 & n%3==2){
    cout<< m+1<<endl;
  }




}
return 0;
}
