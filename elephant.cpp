
#include<iostream>
using namespace std;
int main(){
int n;
cin>> n;
if(n%5==0){
    cout<< n/5;
}else if(n%5==3)
{cout<<((n-3)/5)+1;
}
else {
    if(n%5==4){
        cout<<((n-4)/5)+1;
    } else if (n%5==2){cout<<((n-2)/5) +1;}

    else {
          if (n%5==1){cout<< ((n-1)/5) +1;}

          else {cout<< "1";}

    }


    }

    return 0;
    }






