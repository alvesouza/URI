#include<iostream>

uint fib_calls( uint n, ushort b )
{
    bool bin[64] = {0};
    u_char index = 0, index_m;
    uint Fn[3] = {  1, 0, 0};
                    //0, 1, 0,
                    //0, 0, 1 };
    uint aux[3];
    uint F[64][9] = {{  1, 1, 1,
                    1, 0, 0,
                    0, 0, 1 }};
    
    if(n == 0 || n == 1)
        return 1;
    n--;
    while( n != 0 )
    {
        bin[index] = n%2;
        //bin2[index/2] = n%2;
        n /= 2;
        index++;
    }
    if(bin[0])
        for(int i = 0; i < 3; i++)
            Fn[i] = F[0][i];
    for (u_char index_m = 1; index_m < index; index_m++)
    {
        F[index_m][0] = (F[index_m - 1][0]*F[index_m - 1][0] + F[index_m - 1][1]*F[index_m - 1][3])%b;
        F[index_m][1] = (F[index_m - 1][0]*F[index_m - 1][1] + F[index_m - 1][1]*F[index_m - 1][4])%b;
        F[index_m][2] = (F[index_m - 1][0]*F[index_m - 1][2] + F[index_m - 1][1]*F[index_m - 1][5] + F[index_m - 1][2])%b;

        F[index_m][3] = (F[index_m - 1][3]*F[index_m - 1][0] + F[index_m - 1][4]*F[index_m - 1][3] + F[index_m - 1][5]*F[index_m - 1][6])%b;
        F[index_m][4] = (F[index_m - 1][3]*F[index_m - 1][1] + F[index_m - 1][4]*F[index_m - 1][4] + F[index_m - 1][5]*F[index_m - 1][7])%b;
        F[index_m][5] = (F[index_m - 1][3]*F[index_m - 1][2] + F[index_m - 1][4]*F[index_m - 1][5] + F[index_m - 1][5])%b;

        F[index_m][8] = 1;

        if(bin[index_m])
        {
            for(int i = 0; i < 3; i++)
                aux[i] = Fn[i];
            Fn[0] = (aux[0]*F[index_m][0] + aux[1]*F[index_m][3])%b;
            Fn[1] = (aux[0]*F[index_m][1] + aux[1]*F[index_m][4])%b;
            Fn[2] = (aux[0]*F[index_m][2] + aux[1]*F[index_m][5] + aux[2])%b;
            /*
            Fn[3] = aux[3]*F[index_m][0]+aux[4]*F[index_m][3];
            Fn[4] = aux[3]*F[index_m][1]+aux[4]*F[index_m][4];
            Fn[5] = aux[3]*F[index_m][0];
            */
        }
    }

    return (Fn[0] + Fn[1] + Fn[2]) % b;
}

int main()
{
    uint n, fn, fn_1, aux, i = 1, init;
    ushort b;
    
    std::cin >> n >> b;

    while ( n != 0 || b != 0 )
    {
        fn = 1;
        fn_1 = 1;
        init = n;
        /*
        while ( n > 1 )
        {
            aux = fn;
            fn += fn_1+1;
            fn_1 = aux;
            fn %= b;

            n--;
        }
        */
        fn = fib_calls(n, b);
        printf("Case %u: %u %hu %u\n", i, init, b, fn);
        std::cin >> n >> b;
        i++;
    }    

    return 0;
}