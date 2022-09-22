#include<iostream>
using namespace std;

int main()
{
    int n , k ;
    int i , j ;
    int z = 0 ;
    cin >> n >> k ;
    int arr[n];
    if(n>=k)
    {
        for ( i=0 ; i<n ; i++)
        {
            cin >> arr[i] ;
        }
        for ( j=0 ; j<n ; j++)
        {
            if ( arr[j] >= arr[(k-1)] && arr[j] != 0 )
            {
                z = z +1 ;
            }
        }
    }
    cout << z ;
}

