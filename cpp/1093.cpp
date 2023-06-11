#include <cstdio>
#include <math.h>
using namespace std;
 
int main (int argc, char const* argv[]) {
    short int EV1, EV2, D, AT, Nl, Nv;
    float u, p;
	while(scanf("%hu %hu %hu %hu", &EV1, &EV2, &AT, &D) && (EV1 || EV2 || AT || D)) {
        //this formula comes from an markov chain
        Nl = (EV1+D-1)/D;
        Nv = (EV2+D-1)/D;

        u = (float) AT/6.0;
        u = 1/u - 1;
        //L'hopital, for the one inside the else
        if ( u == 1 ){
            p = (float)Nl/(float)(Nl + Nv);
        }else{//comes from solving the difference equation we get from the Markov Chain technique
            p = ( pow(u,Nl) - 1 )/( pow( u, Nl + Nv) - 1 );
        }
        printf( "%.1f\n", 100*p );
	}
 
	return 0;
}