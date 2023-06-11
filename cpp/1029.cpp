#include<iostream>

int main()
{
    int16_t n;
    int64_t qty;

    int fncall, fn_1call, fn, fn_1, aux;

    
    for( std::cin >> qty; qty > 0; qty--)
    {
        fncall = 1;
        fn_1call = 1;
        fn = 1;
        fn_1 = 0;
        for( std::cin >> n, printf("fib(%hu) = ", n); n > 1; n--)
        {
            aux = fncall;
            fncall += fn_1call + 1;
            fn_1call = aux;

            aux = fn;
            fn += fn_1;
            fn_1 = aux;
        }
        fncall--;
        printf("%d calls = %d\n", fncall, fn);
    }
    
    return 0;
}