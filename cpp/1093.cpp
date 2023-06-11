#include <cstdio>
using namespace std;
 
int main (int argc, char const* argv[]) {
    unsigned char x1, x2, y1, y2;
    short dx, dy;
    bool no_move, one_move;
	while(scanf("%hhu %hhu %hhu %hhu", &x1, &y1, &x2, &y2) && (x1 || x2 || y1 || y2)) {
        dx = x1 - x2;
        dy = y1 - y2;

        dx *= ( 1 - 2*( dx < 0 ));
        dy *= ( 1 - 2*( dy < 0 ));
        /*
        //branchs
        if( !(dx || dy ) ){
            printf("0\n");
        }else if( !dx ^ !dy || ( dx == dy ) ){
            printf("1\n");
        }else{
            printf("2\n");
        }
        */
        //branchless
        no_move = !(dx || dy );
        one_move = !no_move && ( !dx ^ !dy || ( dx == dy ) );
        printf( "%d\n", one_move + (!no_move && !one_move) * 2 );

	}
 
	return 0;
}