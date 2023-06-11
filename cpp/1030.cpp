#include <stdio.h>

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