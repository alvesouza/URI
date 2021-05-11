//
// Created by pedro on 24/04/2021.
//
#include<stdio.h>
int main(){
    unsigned short number;
    unsigned int amount;
    double total, value;

    scanf("%hu %u %lf", &number, &amount, &total);
    total *= amount;

    scanf("%hu %u %lf", &number, &amount, &value);

    printf("VALOR A PAGAR: R$ %0.2lf\n", total + amount*value);

    return 0;
}

