#include<bits/stdc++.h>
using namespace std;
/*
int main()
{
    ushort n, total;
    short first, last, now;
    int8_t direction, direction_new;

    for (cin >> n; n; cin >> n)
    {
        direction = 0;
        cin >> first >> now;
        last = first;
        direction = ( now > last ) + (( now < last ) << 1); 
        for (short i = 0; i < n-2; i++)
        {
            cin >> now;
            direction_new = (( now > last ) + (( now < last ) << 1)); 

        }
        
    }
    
    return 0;
}
*/
int main()
{
    short n, total;
    short first, last, now;
    uint8_t direction, direction_new, dir_first;

    for (cin >> n; n; cin >> n)
    {
        /* code */
        total = 0;
        direction = 0;
        cin >> first >> now;
        last = first;
        direction = ( now > last ) + (( now < last ) << 1); 
        dir_first = direction;
        last      = now;
        for (short i = 0; i < n-2; i++)
        {
            cin >> now;
            direction_new = (( now > last ) + (( now < last ) << 1));

            if(!dir_first)
                dir_first = direction_new;
            if (!direction_new)
            {
                direction_new = direction;
            }
            else if( direction && direction != direction_new)
            {
                total++;
            }       

            direction   = direction_new;
            last        = now;
        }

        now             = first;
        direction_new   = (( now > last ) + (( now < last ) << 1));
        if (!direction_new)
        {
            direction_new = direction;
        }
        else if( direction && direction != direction_new)
        {
            total++;
        } 
        direction       = direction_new;
        direction_new   = dir_first;
        if (!direction_new)
        {
            direction_new = direction;
        }
        else if( direction && direction != direction_new)
        {
            total++;
        }    

        cout << total << endl;
    }
    
    return 0;
}