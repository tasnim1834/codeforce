//In The Name Of ALlah, The most Gracious The Most Merciful
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base :: sync_with_stdio(0);
cin.tie(0);
int n,m;

cin>>n>>m;

if(n<m) cout<<"-1";

else {
    for(int i=1;i<100000;i++){
        if(m*i*2>=n){
            cout<< m*i;
            break;
        }
    }
}
return 0;
}