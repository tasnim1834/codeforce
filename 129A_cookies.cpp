#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base :: sync_with_stdio(0);
cin.tie(0);
int n,x,sum,count,round;
sum=0;
count=0;
round=0;
cin>>n;
vector<int>v;

    for(int i=0;i<n;i++){
    cin>>x;

    v.push_back(x);
    sum=sum+v[i];

    if(v[i]%2==0){
       count++;
    }else{
        round++;
    }
}

    if(sum%2==0){
       cout<<count;
}    else{
    cout<<round;
}      
return 0;
}