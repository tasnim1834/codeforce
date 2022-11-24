#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base :: sync_with_stdio(0);
cin.tie(0);
int t,n,k,i,m;
cin>>t;

while(t--){
    m=0;
    cin>>n>>k;
    if(k==1)cout<<n<<"\n";

    else if(k>=n) cout<<1<<"\n";

    else{
        for( i=2;i<=ceil(n/2);i++){
            if(n%i==0 && (n/i)<=k) {
            m++;
            break;}
        }
        if(m>0) cout<<i<<"\n";
        else cout<<n<<"\n";
    }
}

return 0;
}