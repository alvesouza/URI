#include<iostream>

int MDC( int N, int D )
{
    if( N < 0 ) N *= -1;
    int aux = N % D;
    while( aux != 0 )
    {
        N = D;
        D = aux;
        aux = N % D;
    }
    return D;
}

int main()
{
    int N1, D1, aux;
    ushort N2, D2, N;

    char op_type, buffer;

    for( scanf("%hu", &N); N > 0; N--)
    {
        scanf("%d %c %d %c %hu %c %hu", 
            &N1, &buffer, &D1, &op_type, &N2, &buffer, &D2 );

        switch (op_type)
        {
        case '+':
            N1 = N1*D2 + N2*D1;
            D1  *= D2;
            break;
        case '-':
            N1 = N1*D2 - N2*D1;
            D1  *= D2;
            break;
        case '*':
            N1 = N1*N2;
            D1  *= D2;
            break;
        case '/':
            N1 = N1*D2;
            D1  *= N2;
            break;
        }
        if (D1 < 0)
        {
            D1 *= -1;
            N1 *= -1;
        }
        
        printf( "%d/%d = ", N1, D1 );
        aux = MDC(N1, D1);
        printf( "%d/%d\n", N1/aux, D1/aux );        
    }

    return 0;
}