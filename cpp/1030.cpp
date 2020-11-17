#include <stdio.h>

// int josephusRecurssive(int n, int k)
// {
//     if (n == 1)
//         return 1;
//     else
//         return (josephusRecurssive(n - 1, k) + k - 1) % n + 1;
// }

// int josephus(int n, int k)
// {
//     int survivor = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         survivor = (survivor + k) % i;
//     }
//     return survivor + 1;
// }

int main()
{
    int entradas, n, k;
    scanf("%d", &entradas);
    for (int i = 1, survivor = 1; i <= entradas; survivor = 1, i++)
    {
        scanf("%d %d", &n, &k);
        
        for (int j = 1; j <= n; j++)
            survivor = (survivor + k) % j;
        
        printf("Case %d: %d\n", i, survivor + 1);
    }
    return 0;
}