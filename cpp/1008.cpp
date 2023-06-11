//
// Created by pedro on 24/04/2021.
//
#include<stdio.h>

int main(){
    unsigned int integer, hours, number;
    unsigned char c;
    scanf("%u %u %u.%hhu", &number, &hours, &integer, &c);
    unsigned cents = hours*c;
    printf("NUMBER = %d\nSALARY = U$ %u.%02hhu\n", number, hours*integer + cents/100, cents%100);

    return 0;
}

