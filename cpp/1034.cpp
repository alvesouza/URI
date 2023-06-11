#include<iostream>
#include<limits>
#include <algorithm>
#include<vector>
#include<stack>
#include <unordered_map>
/*        
uint min_coin( const ushort N, const int M )
{
    ushort blocks[25] = {0};
    //uint *changes;
    uint *changes;
    changes = (uint *)malloc(sizeof(uint)*(M+1));
    std::fill(changes, changes + M + 1, std::numeric_limits<uint>::max());
    changes[0] = 0;
    for( ushort num = 0; num < N; num++)
    {
        std::cin >> blocks[num];
    }

    for(ushort block_index = 0; block_index < N; block_index++)
    {
        for( uint rest = blocks[block_index]; rest <= M; rest ++)
        {
            if( changes[rest - blocks[block_index]] + 1 < changes[rest] )
                changes[rest] = changes[rest - blocks[block_index]] + 1;
        }    
    }

    return changes[M];
}
*/

uint recursion_coin( const ushort blocks[], const uint total, const uint min, const ushort N, const int M)
{
    if (total >= min)
        return(min);
    
    if(M == 0)
        return(min < total?min:total);
    
    uint min_local = min, min_branch;
    uint i = M/blocks[N-1];
    if(i + total >= min)
        return min_local;
    do
    {
        min_branch = recursion_coin(blocks, total + i, min_local,N-1, M - i*blocks[N-1]);
        min_local = min_local < min_branch?min_local:min_branch;
        i--;
    } while (i >= 0 && i != std::numeric_limits<uint>::max() && N != 1);

    return min_local;    
}
/*
uint recursion_coin(const ushort blocks[], const uint total, const uint min, const ushort N, const uint M, std::unordered_map<std::uint64_t, uint>& memo)
{
    if (total >= min)
        return min;
    
    if (M == 0)
        return min < total ? min : total;
    
    const std::uint64_t key = (static_cast<std::uint64_t>(N) << 32) | M;
    if (memo.count(key))
        return memo[key];

    uint min_local = min;
    uint min_branch;
    uint i = M / blocks[N - 1];
    if(i + total >= min)
        return min_local;
    do
    {
        min_branch = recursion_coin(blocks, total + i, min_local, N - 1, M - i * blocks[N - 1], memo);
        min_local = std::min(min_local, min_branch);
        i--;
    } while (i != std::numeric_limits<uint>::max() && N != 1 && i >= 0);

    memo[key] = min_local;
    return min_local;    
}
*/
uint min_coin( const ushort N, const int M )
{
    std::stack<uint> change;
    std::unordered_map<std::uint64_t, uint> memo;
    uint total = 0, rest = M, min = std::numeric_limits<uint>::max(), aux;
    ushort blocks[25] = {0};
    uint num_blocks[25] = {0};
    ushort block_index = N-1;
    for( ushort num = 0; num < N; num++)
    {
        std::cin >> blocks[num];
    }
    std::sort(blocks, blocks + N);
    //return recursion_coin( blocks, 0, std::numeric_limits<uint>::max(), N, M, memo );
    return recursion_coin( blocks, 0, std::numeric_limits<uint>::max(), N, M );
}

int main()
{
    ushort N;
    int M, T;

    for (std::cin >> T; T > 0; T--)
    {
        std::cin >> N >> M;

        std::cout << min_coin(N, M) << std::endl;
    }

    return 0;
}