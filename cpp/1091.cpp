#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int x0, y0, x1, y1;
    ushort n;
    char region[3];
    region[2] = '\0';
    cin >> n;
    
    while( n )
    {
        cin >> x0 >> y0;
        while (n--)
        {
            cin >> x1 >> y1;
            x1 -= x0;
            y1 -=y0;

            if (x1 == 0 || y1 == 0)
            {
                cout << "divisa\n";
            }else{
                if( y1 > 0 )
                    region[0] = 'N';
                else
                    region[0] = 'S';
                if( x1 > 0 )
                    region[1] = 'E';
                else
                    region[1] = 'O';

                cout << region << endl;
            }           

        }
        cin >> n;   
    }

    return 0;
}