#include<iostream>
using namespace std;
 
int main()
{
    int t,p,q;
    int x=0;
    int r=0;
    cin >> t;
    while(t--)
    {
        cin >> p >> q;
        if (q-p>=2)
            r=r+1;
    }
    cout << r;
}