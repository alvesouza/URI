#include<stdio.h>
#define PI 3.14159

int main(){
    double raio;
    scanf("%lf", &raio);
    printf("A=%.4lf\n",PI*raio*raio);
    return 0;
}