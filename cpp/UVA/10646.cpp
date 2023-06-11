#include<bits/stdc++.h>
//misread too much, and got bored
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    uint32_t T;
    uint8_t Y, skip, aux;
    cin >> T;
    
    char deck[52][2];
    while(T--)
    {
        skip = 3;
        Y = 0;
        for (short i = 51; i >= 0; i--)
        {
            cin >> deck[i];    
        }

        for (ushort i = 0; i < 3; i++)
        {
            if ( deck[i][0] > '1' && deck[i][0] <= '9')
            {
                aux = deck[i][0] - '0';
                Y += aux;
                skip += 10 - aux;
            }
            else
                Y += 10;
        }
        cout << Y << endl;
        if( skip + Y < 25 )
            cout << deck[ 25 - Y ] << endl;
        else
            cout << deck[ 76 - Y - skip ][0] << deck[ 76 - Y - skip ][1] << endl;
        
        
    }
    
    return 0;
}