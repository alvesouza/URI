#include "stdio.h"
#include "math.h"
#include <cstring>
using namespace std;

inline unsigned int largest_power_10( unsigned int x ){
    x = (unsigned int) log10( x );
    return( pow( 10, x ) );
}
/*
unsigned int* array_times( unsigned int x ){
    unsigned int *count;
    unsigned int aux_count[10];
    unsigned int power_10,new_power10,orig_power10, number_of_times;
    unsigned short int first_digit;
    bool entered = false;
    count = (unsigned int*)malloc(10*sizeof (unsigned int));
    memset( count, 0, 10*sizeof(unsigned int));

    if( x == 0 )count[0] = 1;
    orig_power10 = (unsigned int) log10( x);
    new_power10 = orig_power10;
    while ( x != 0 ){
        power_10 = largest_power_10(x);
        memset( aux_count, 0, 10*sizeof(unsigned int));
        if( x/10 == 0 ){
            power_10 = 1;
            for(int i = entered; i <= x; i++)
                aux_count[i]++;
        }else{
            first_digit = x / power_10;
            number_of_times = power_10 * first_digit*new_power10/10;
            aux_count[first_digit] += x % power_10 + 1;

            while (first_digit > 0)
            {
                first_digit--;
                aux_count[first_digit] += power_10;
            }
            for (int i = 0; i < 10; ++i) {
                aux_count[i] += number_of_times;
            }
            //takes out zeros that are on the front of the number
            number_of_times = power_10;

            while ( !entered && number_of_times != 0){
                aux_count[0] -= number_of_times;
                number_of_times /= 10;
            }
            entered = true;
        }

        for (int i = 0; i < 10; ++i) {
            count[i] += aux_count[i];
        }
        x %= power_10;
        orig_power10 = new_power10;
        new_power10 = (unsigned int) log10( x);
        if (orig_power10 != new_power10)
            count[0] += (x + 1)*(orig_power10 - new_power10 - 1 );
    }

    return count;
}
 */
unsigned int* array_times( unsigned int x ){
    unsigned int *count;
    unsigned int aux_count[10];
    unsigned int power_10 = 0, Total_Power = 1, rest,Weight = 0, number_times;
    unsigned short int first_digit;
    bool entered = false;
    count = (unsigned int*)malloc(10*sizeof (unsigned int));
    memset( count, 0, 10*sizeof(unsigned int));
    if( x == 0 )
        count[0] = 1;
    while( x != 0 ){
        rest = x % 10;
        x /= 10;
        count[rest] += Weight + 1;
        Weight += Total_Power*rest;
        number_times = rest*power_10*Total_Power/10;
        for (int i = 0; i < rest; ++i) {
            count[i] += Total_Power;
        }
        for (int i = 0; i < 10; ++i) {
            count[i] += number_times;
        }
        power_10++;
        Total_Power *= 10;
    }
    Total_Power /= 10;
    while ( Total_Power > 1){
        count[0] -= Total_Power;
        Total_Power /= 10;
    }
    return count;
}
int main (int argc, char const* argv[]) {
    unsigned int X1, X2;
    unsigned int *aux_count, *count;
	while(scanf("%u %u", &X1, &X2) && (X1 || X2 )) {

        aux_count = array_times(X1 - 1);
        count = array_times(X2);
        /*
        for(int i = 0; i < 10; i++){
            printf("%u", aux_count[i]);
            if( i != 9 )
                printf(" ");
        }
        printf("\n");
        for(int i = 0; i < 10; i++){
            printf("%u", count[i]);
            if( i != 9 )
                printf(" ");
        }
        printf("\n");
        */
        for(int i = 0; i < 10; i++){
            printf("%u", count[i] - aux_count[i]);
            if( i != 9 )
                printf(" ");
        }

        printf("\n");

	}
 
	return 0;
}