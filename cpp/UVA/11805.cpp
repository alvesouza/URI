#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    u_int16_t i = 0, number = 1;
    u_int16_t N, K, P;
    for ( cin >> i; i; i--, number++)
    {
        cin >> N >> K >> P;
        printf( "Case %hu: %hu\n", number, (P + K - 1) % (N) + 1 );
    }    

    return 0;
}
