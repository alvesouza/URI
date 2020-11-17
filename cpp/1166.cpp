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
//Run time
// int main(){
//     int entradas,*torres,numeroTorres = 0,i = 0,j = 0,numeroEsfera,raizQuadrada,quadrado;
//     bool encontrou;
//     scanf("%d",&entradas);
//     while (i < entradas)
//     {
//         scanf("%d",&numeroTorres);
//         torres = (int *)malloc(numeroTorres*sizeof(int));
//         numeroEsfera = 0;
//         encontrou = true;
//         for (j = 0; j < numeroTorres; j++)
//             torres[j] = 0;

//         while (encontrou)
//         {
//             encontrou = false;
//             for (j = 0; j < numeroTorres&&!encontrou; j++)
//             {
//                 if(torres[j] == 0){
//                     torres[j] = ++numeroEsfera;
//                     encontrou = true;
//                 }else
//                 {
//                     quadrado = torres[j] + numeroEsfera+1;
//                     raizQuadrada = floorSqrt(quadrado);
//                     if(raizQuadrada*raizQuadrada == quadrado){
//                         torres[j] = ++numeroEsfera;
//                         encontrou = true;
//                     }
//                 }
//             }
//         }
//         printf("%d\n", numeroEsfera);

//         free(torres);
//         i++;
//     }

//     return 0;
// }

//CompileTime
template <int size>
struct respostas
{
    int array[size];

    constexpr respostas() : array()
    {
        int torres[size] = {0};
        int numberPin = 1, i = 0, j = 0, numberSpheres = 0, quadrado=0, raizQuadrada=0;
        bool encontrou=false;
        for (i = 0; i < size; i++)
        {
            encontrou = true;
            numberSpheres = 0;
            for (j = 0; j <= i; j++)
                torres[j] = 0;

            while (encontrou)
            {
                encontrou = false;
                for (j = 0; j <= i && !encontrou; j++)
                {
                    if (torres[j] == 0)
                    {
                        encontrou = true;
                        torres[j] = ++numberSpheres;
                    }
                    else
                    {
                        quadrado = torres[j] + numberSpheres + 1;
                        raizQuadrada = floorSqrt(quadrado);
                        if (raizQuadrada * raizQuadrada == quadrado)
                        {
                            torres[j] = ++numberSpheres;
                            encontrou = true;
                        }
                    }
                }
            }
            array[i] = numberSpheres;
        }
    }
};

int main(){
    constexpr struct respostas<50> Resposta;
    int entradas, hastes;
    scanf("%d", &entradas);
    for(int i = 0;i < entradas; i++){
        scanf("%d", &hastes);
        printf("%d\n", Resposta.array[hastes-1]);
    }
    return 0;
    
}
