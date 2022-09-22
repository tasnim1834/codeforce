#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b;
    if(a>b){
         c=a;
    }
    else{
         c=b;
    };

    d=(7-c);
    if(d==1 || d==5){
        printf("%d/6",d);
    }else{
        if(d==0){
            cout<<"0/6"<<endl;
        }
        if(d==2){
            cout<<"1/3"<<endl;
        }
        if(d==3){
            cout<<"1/2"<<endl;
        }
        if(d==4){
            cout<<"2/3"<<endl;
        }
        if(d==6){
            cout<<"1/1"<<endl;
        }

    }
    return 0;
}
