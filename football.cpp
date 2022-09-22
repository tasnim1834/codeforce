#include<bits/stdc++.h>

using namespace std;
int main(){
    int count;
    count=0;
    string n;
    cin>>n;

    if (n.size()<7){
        cout<<"NO";
    }
      else{
    for(int i=0;i<n.size()-1;i++){
        if(n[i]==n[i+1]){
            count++;
            if(count>=6){
                break;
            }

        }else{
            count=0;
        }
    }
    if(count>=6){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

}

}