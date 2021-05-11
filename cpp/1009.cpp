//
// Created by pedro on 24/04/2021.
//
#include<stdio.h>
int main(){
    {
        char name[100];
        scanf("%s", name);
    }

    double salary, sales;
    scanf("%lf %lf", &salary, &sales);
    printf("TOTAL = R$ %0.2lf\n", salary + 0.15*sales);

    return 0;
}

