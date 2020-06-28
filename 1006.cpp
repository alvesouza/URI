#include<stdio.h>
// #include<time.h>
#define PA 2/10.0
#define PB 3/10.0
#define PC 5/10.0
// const double pa = PA/(PA+PB);
// const double pb = PB/(PA+PB);

// //Speed Test
// #include <stdlib.h>
// #define seed 10
// #define numeroTestes 0
// double timeDiff(clock_t start, clock_t end){
//     return ((double)end-start)*
//         1000/CLOCKS_PER_SEC;
// }


// #define PATest01 2
// #define PBTest01 3
// #define PCTest01 5
// const double paTest01 = PATest01/(PATest01+PBTest01+PCTest01);
// const double pbTest01 = PBTest01/(PATest01+PBTest01+PCTest01);
// const double pcTest01 = PCTest01/(PATest01+PBTest01+PCTest01);
// void Test01(){
//     clock_t start,end;
//     srand(seed);
//     double crono = 0.0;
//     start = clock();
//     double notaA,notaB,notaC, media;

//     for(int i = 0;i<numeroTestes;i++){
//         notaA = (rand()%101)/10.0;
//         notaB = (rand()%101)/10.0;
//         notaC = (rand()%101)/10.0;

//         media = paTest01*notaA + pbTest01*notaB+ pcTest01*notaC;

        
//     }
//     end = clock();
//     crono += timeDiff(start,end);
//     printf("Tempo Test01: %lf\n",crono);
// }

// //teste02
// #define PATest02 2
// #define PBTest02 3
// #define PCTest02 5
// void Test02(){
//     srand(seed);
//     clock_t start,end;
//     double crono = 0.0;
//     start = clock();
//     double notaA,notaB,notaC, media;

//     const double paTest02 = PATest02/(PATest02+PBTest02+PCTest02);
//     const double pbTest02 = PBTest02/(PATest02+PBTest02+PCTest02);
//     const double pcTest02 = PCTest02/(PATest02+PBTest02+PCTest02);
    
//     for(int i = 0;i<numeroTestes;i++){
//         notaA = (rand()%101)/10.0;
//         notaB = (rand()%101)/10.0;
//         notaC = (rand()%101)/10.0;

//         media = paTest02*notaA + pbTest02*notaB+ pcTest02*notaC;

        
//     }
//     end = clock();
//     crono += timeDiff(start,end);
//     printf("Tempo Test02: %lf\n",crono);
// }

// //test03
// #define paTest03 2/10.0
// #define pbTest03 3/10.0
// #define pcTest03 5/10.0
// void Test03(){
//     clock_t start,end;
//     srand(seed);
//     start = clock();
//     double notaA,notaB, notaC, media;
//     double crono = 0.0;

//     for(int i = 0;i<numeroTestes;i++){
//         notaA = (rand()%101)/10.0;
//         notaB = (rand()%101)/10.0;
//         notaC = (rand()%101)/10.0;

//         media = paTest03*notaA + pbTest03*notaB+ pcTest03*notaC;

        
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
//     double notaA,notaB,notaC, media;

//     for(int i = 0;i<numeroTestes;i++){
//         notaA = (rand()%101)/10.0;
//         notaB = (rand()%101)/10.0;
//         notaC = (rand()%101)/10.0;

//         media = (2*notaA + 3*notaB + 5*notaC)/10.0;

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
//     double notaA,notaB,notaC, media;
//     double pesoA = 2/10.0,pesoB = 3/10.0,pesoC = 5/10.0;

//     for(int i = 0;i<numeroTestes;i++){
//         notaA = (rand()%101)/10.0;
//         notaB = (rand()%101)/10.0;
//         notaC = (rand()%101)/10.0;

//         media = pesoA*notaA + pesoB*notaB + pesoC*notaC;

        
//     }
//     end = clock();
//     crono += timeDiff(start,end);
//     printf("Tempo Test05: %lf\n",crono);
// }
int main(){
    double notaA,notaB,notaC;
    scanf("%lf %lf %lf", &notaA,&notaB,&notaC);
    printf("MEDIA = %.1lf\n",PA*notaA + PB*notaB + PC*notaC);
    // Test01();
    // Test02();
    // Test03();
    // Test04();
    // Test05();

    return 0;
}