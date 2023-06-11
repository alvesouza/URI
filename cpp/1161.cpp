#include<iostream>

int main()
{
    ushort M, N, aux;
    uint64_t MF, NF;

    while (std::cin >> M >> N)
    {
        /* code */
        MF = 1;
        NF = 1;
        if (M > N)
        {
            /* code */
            aux = N;
            N = M;
            M = aux;
        }
        aux = 2;
        for (aux; aux <= M; aux++)
        {
            MF *= aux;
            /* code */
        }
        NF = MF;
        for (aux; aux <= N; aux++)
        {
            NF *= aux;
            /* code */
        }

        std::cout << NF + MF << std::endl;
        
    }
    
    return 0;
}