#include<iostream>
 
using namespace std;
 
int main()
{   
 long long t,a,b,c,n;
 
 cin>>t;
 while(t--){
 cin>>a>>b>>c>>n;
 long long  z=(a+b+c+n);
 long long y= (z%3);
 
 if(y==0 && n>1 && (a!=b || b!=c || a!=c)){
   cout<<"YES"<<endl;
}
else if(y==0 && n==1 && (a==b || b==c || c==a)){cout<<"YES"<<endl;
}
else{cout<<"NO"<<endl;}
 
}
    
    return 0;
}