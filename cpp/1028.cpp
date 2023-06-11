//Runtime error for some reason
/*
#include<stdio.h>

inline unsigned short int Max_Commom_Divisor( unsigned short int A, unsigned short int B){
    unsigned short int rest;
    if( B > A )
    {
        rest = A;
        A = B;
        B = rest;
    }

    do {
        rest = A % B;
        A = B;
        B = rest;
    }while( rest != 0 );

    return A;
}


int main(){

    unsigned short int a, n, b;

    for (scanf("%hu", &n); n > 0 ; --n) {
        scanf("%hu %hu", &a, &b );
        printf("%hu\n", Max_Commom_Divisor( a,b));
    }

    return 0;
}
*/
#include<stdio.h>

int Max_Commom_Divisor( int A, int B){
    int rest;
    if( B > A )
    {
        rest = A;
        A = B;
        B = rest;
    }

    do {
        rest = A % B;
        A = B;
        B = rest;
    }while( rest != 0 );

    return A;
}


int main(){

    int a, n, b;
    scanf("%d", &n);
    for (; n > 0 ; --n) {
        scanf("%d %d", &a, &b );
        printf("%d\n", Max_Commom_Divisor( a,b));
    }

    return 0;
}