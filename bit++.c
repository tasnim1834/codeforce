#include<stdio.h>
#include<math.h>
#include<stdlib.h>
 
int main ()
{
    int n , t;
    int x=0 ;
    char a , b , c ;
    scanf("%d", &t);
    while (t--)
    {
        scanf(" %c%c%c", &a , &b , &c);
        if ( b == '+')
        {
            x = x+1 ;
        }
        else if ( b == '-')
        {
            x = x-1 ;
        }
    }
 
    printf("%d",x);
    return 0;
}


