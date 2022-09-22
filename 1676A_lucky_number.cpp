#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    string s[6];

    cin>>t;

    while(t--){
       cin >> s ;
     int a= s[0]+s[1]+s[2];
     int b= s[3]+s[4]+s[5];

     if(a==b){
        cout<< "YES";
        else {cout<<"NO"}
     }
      
    }
   return 0; 
}
 