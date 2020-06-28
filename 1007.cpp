#include<stdio.h>

// //Test Speed
// #include<time.h>

// #include <stdlib.h>
// #define seed 10
// #define numeroTestes 1000000
// double timeDiff(clock_t start, clock_t end){
//     return ((double)end-start)*
//         1000/CLOCKS_PER_SEC;
// }


// void Test01(){
//     clock_t start,end;
//     srand(seed);
//     double crono = 0.0;
//     start = clock();
//     long A, B, C,D, media;

//     for(int i = 0;i<numeroTestes;i++){
//         A = rand()%100000;
//         B = rand()%100000;
//         C = rand()%100000;
//         D = rand()%100000;
//         start = clock();

//         A = A*B - C*D;
        
//         end = clock();
//         crono += timeDiff(start,end);
//     }
    
//     printf("Tempo Test01: %lf\n",crono);
// }


// void Test02(){
//     clock_t start,end;
//     srand(seed);
//     double crono = 0.0;
//     start = clock();
//     long A, B, C,D, media;

//     for(int i = 0;i<numeroTestes;i++){
//         A = rand()%100000;
//         B = rand()%100000;
//         C = rand()%100000;
//         start = clock();

//         D = rand()%100000;
//         A = A*B;
//         A -= C*D;
//         end = clock();
//         crono += timeDiff(start,end);
//     }
    
//     printf("Tempo Test02: %lf\n",crono);
// }


int main(){
    long A,B,C,D;
    scanf("%ld %ld %ld %ld", &A,&B,&C,&D);
    printf("DIFERENCA = %ld\n",A*B-C*D);

    // Test01();
    // Test02();

    return 0;
}