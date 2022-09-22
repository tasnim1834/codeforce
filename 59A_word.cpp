#include<bits/stdc++.h>
using namespace std;

int main(){
   int u,l;
   u=0;
   l=0;
   string s;

   cin>>s;
  for(int i=0; i<s.size(); i++)

   if(isupper(s[i])){
     u++;
   }

    else{
        l++;
    }


 if(l>u || l==u){
    transform(s.begin(),s.end(),s.begin(), ::tolower);


    cout<<s;}

    else{
        transform(s.begin(),s.end(),s.begin(), ::toupper);



    cout<<s;

    }


}

 

