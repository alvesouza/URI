#include <stdio.h>
#include <stdlib.h>

constexpr int floorSqrt(int x)
{
    // Base cases
    if (x == 0 || x == 1)
        return x;

    // Do Binary Search for floor(sqrt(x))
    int start = 1, end = x, ans = 0;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        // If x is a perfect square
        if (mid * mid == x)
            return mid;

        // Since we need floor, we update answer when mid*mid is
        // smaller than x, and move closer to sqrt(x)
        if (mid * mid < x)
        {
            start = mid + 1;
            ans = mid;
        }
        else // If mid*mid is greater than x
            end = mid - 1;
    }
    return ans;
}

template <int size>
struct primos
{
    int array[size];

    constexpr primos() : array()
    {
        int i = 1, j = 0, numero = 3, raizQuadrada = 0, quantNumero = size;
        bool isPrime = true;
        array[0] = 2;
        while (i < quantNumero)
        {
            raizQuadrada = floorSqrt(numero);
            j = 0;
            isPrime = true;
            while (array[j] <= raizQuadrada && isPrime)
            {
                if (numero % array[j] == 0)
                {
                    isPrime = false;
                }
                j++;
            }

            if (isPrime)
            {
                array[i++] = numero;
            }
            numero += 2;
        }
    }
};

int main()
{
    static const int numeroMax = 3500;
    constexpr struct primos<numeroMax> Primos;
    int n, ult, k, i,ultPrime,survivor;
    scanf("%d", &n);
    while (n != 0)
    {
        survivor = 1;
        ultPrime = n - 1;
        for (int j = 1; j <= n; j++)
            survivor = (survivor + Primos.array[n-j]) % j;
        
        printf("%d\n",survivor + 1);
        scanf("%d", &n);
    }
    
    return 0;
}