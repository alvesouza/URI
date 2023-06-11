#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c, d;

    scanf( "%lf %lf %lf", &a, &b, &c );

    c = b*b - 4*a*c;

    if( c < 0 || a == 0)
    {
        printf("Impossivel calcular\n");
        return 0;
    }

    c = sqrt(c);

    a *= 2;
    d = (-b + c)/a;
    a = (-b - c)/a;

    printf("R1 = %.5f\nR2 = %.5f\n", d, a);
    return 0;
}