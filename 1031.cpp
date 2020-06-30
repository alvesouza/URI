#include <stdio.h>

int procuraPasso(int n)
{
    int ult = 1, k = 0;
    n--;
    while (ult != 13)
    {
        ult = 1;
        k++;
        for (int i = 1; i <= n; i++)
            ult = (ult + k) % i;
        ult = ult + 2;
    }
    return k;
}

int main()
{
    int n, ult, k,i;
    scanf("%d", &n);
    while (n != 0)
    {
        n--;
        k = 0;
        ult = 1;
        while (ult != 11)
        {

            ult = 1;
            k++;
            i = 1;
            while(i <= n){
                ult = (ult + k) % i;
                i++;
            }
                
        }

        printf("%d\n", k);
        scanf("%d", &n);
    }
    return 0;
}