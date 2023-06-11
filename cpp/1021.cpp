#include<stdio.h>

int main(){
    long Value100;
    int Qty;
    {
        double Value;
        scanf( "%lf", &Value );
        Value100 = Value*100;
    }
    int Cents[] = {
            10000,
            5000,
            2000,
            1000,
            500,
            200,
            100,
            50,
            25,
            10,
            5,
            1
    };

    printf( "NOTAS:\n" );
    for( unsigned short i = 0; i < 12; i++ )
    {
        Qty = Value100 / Cents[ i ];
        Value100 %= Cents[ i ];
        if( i < 6 ){
            printf( "%d nota(s) de R$ %d.00\n", Qty, Cents[i] / 100 );
            switch( i ){
                case 5:
                    printf( "MOEDAS:\n" );
            }
        }
        else if ( i == 6 ){
            printf( "%d nota(s) de R$ 1.00\n", Qty );
        }else{
            printf( "%d moeda(s) de R$ 0.%02d\n", Qty, Cents[i] );
        }
    }

    return 0;
}