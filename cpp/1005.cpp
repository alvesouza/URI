#include<stdio.h>
// #include<time.h>
#define PA 3.5/11.0
#define PB 7.5/11.0
// const double pa = PA/(PA+PB);
// const double pb = PB/(PA+PB);

// //Speed Test
// #include <stdlib.h>
// #define seed 10
// #define numeroTestes 1000
// double timeDiff(clock_t start, clock_t end){
//     return ((double)end-start)*
//         1000/CLOCKS_PER_SEC;
// }


// #define PATest01 3.5
// #define PBTest01 7.5
// const double paTest01 = PATest01/(PATest01+PBTest01);
// const double pbTest01 = PBTest01/(PATest01+PBTest01);
// void Test01(){
//     clock_t start,end;
//     srand(seed);
//     double crono = 0.0;
//     start = clock();
//     double notaA,notaB, media;

//     for(int i = 0;i<numeroTestes;i++){
//         notaA = (rand()%101)/10.0;
//         notaB = (rand()%101)/10.0;

//         media = paTest01*notaA + pbTest01*notaB;

        
//     }
//     end = clock();
//     crono += timeDiff(start,end);
//     printf("Tempo Test01: %lf\n",crono);
// }

// //teste02
// #define PATest02 3.5
// #define PBTest02 7.5
// void Test02(){
//     srand(seed);
//     clock_t start,end;
//     double crono = 0.0;
//     start = clock();
//     double notaA,notaB, media;

//     const double paTest02 = PATest02/(PATest02+PBTest02);
//     const double pbTest02 = PBTest02/(PATest02+PBTest02);
    
//     for(int i = 0;i<numeroTestes;i++){
//         notaA = (rand()%101)/10.0;
//         notaB = (rand()%101)/10.0;

//         media = paTest02*notaA + pbTest02*notaB;

        
//     }
//     end = clock();
//     crono += timeDiff(start,end);
//     printf("Tempo Test02: %lf\n",crono);
// }

// //test03
// #define paTest03 3.5/11.0
// #define pbTest03 7.5/11.0
// void Test03(){
//     clock_t start,end;
//     srand(seed);
//     start = clock();
//     double notaA,notaB, media;
//     double crono = 0.0;

//     for(int i = 0;i<numeroTestes;i++){
//         notaA = (rand()%101)/10.0;
//         notaB = (rand()%101)/10.0;

//         media = paTest03*notaA + pbTest03*notaB;

        
//     }
//     end = clock();
//     crono += timeDiff(start,end);
//     printf("Tempo Test03: %lf\n",crono);
// }

// //test04
// void Test04(){
//     clock_t start,end;
//     double crono = 0.0;
//     srand(seed);
//     start = clock();
//     double notaA,notaB, media;

//     for(int i = 0;i<numeroTestes;i++){
//         notaA = (rand()%101)/10.0;
//         notaB = (rand()%101)/10.0;

//         media = (3.5*notaA + 7.5*notaB)/11.0;

//     }
//     end = clock();
//     crono += timeDiff(start,end);
//     printf("Tempo Test04: %lf\n",crono);
// }
// //test05
// void Test05(){
//     clock_t start,end;
//     double crono = 0.0;
//     srand(seed);
//     start = clock();
//     double notaA,notaB, media;
//     double pesoA = 3.5/11.0,pesoB = 7.5/11.0;

//     for(int i = 0;i<numeroTestes;i++){
//         notaA = (rand()%101)/10.0;
//         notaB = (rand()%101)/10.0;

//         media = pesoA*notaA + pesoB*notaB;

        
//     }
//     end = clock();
//     crono += timeDiff(start,end);
//     printf("Tempo Test05: %lf\n",crono);
// }
int main(){
    double notaA,notaB;
    scanf("%lf %lf", &notaA,&notaB);
    printf("MEDIA = %.5lf\n",PA*notaA + PB*notaB);

    return 0;
}