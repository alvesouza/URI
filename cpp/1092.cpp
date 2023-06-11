/*
#include<bits/stdc++.h>
using namespace std;

struct ArrayHasher {
    std::size_t operator()(const array<int, 4>& a) const {
        std::size_t h = 0;

        for (auto e : a) {
            h ^= std::hash<int>{}(e)  + 0x9e3779b9 + (h << 6) + (h >> 2); 
        }
        return h;
    }   
};

int l_sub( int **matrix, int max, unnot_ordered_map< array<int,4> , int, ArrayHasher > *Cache, int x0, int y0, int x1, int y1 )
{
    if( x0 == x1 || y0 == y1 )
        return 0;
    if( Cache->find({x0, y0, x1, y1}) != Cache->end() ){
        //array<int,4> aux_arr = {x0, y0, x1, y1};
        //return (*Cache)[aux_arr];
        return (*Cache)[{x0, y0, x1, y1}];
    }

    int size_sub = (x1 - x0 )*( y1 - y0 );
    int aux, last = matrix[y0][x0]-1;
    bool not_ordered = true;
    for (int i = x0; not_ordered&&i < x1; i++)
        for (int j = y0; not_ordered&&j < y1; j++)
        {
            not_ordered = not_ordered && (last < matrix[j][i]);
            last = matrix[j][i];
        }

    if( not_ordered )
    {
        Cache->insert({{x0, y0, x1, y1}, size_sub});
        return size_sub;
    }

    for (int i = 0; i < 2 && max < (x1 - x0 - 1)*( y1 - y0 ) ; i++)
    {
        if( i == 0 )
            aux = l_sub( matrix, max, Cache, x0 + 1, y0, x1, y1 );
        else
            aux = l_sub( matrix, max, Cache, x0, y0, x1 - 1, y1 );

        if( aux > max )
            max = aux;
    }
    
    for (int i = 0; i < 2 && max < (x1 - x0)*( y1 - y0 - 1 ) ; i++)
    {
        if( i == 0 )
            aux = l_sub( matrix, max, Cache, x0, y0 + 1, x1, y1 );
        else
            aux = l_sub( matrix, max, Cache, x0, y0, x1, y1 - 1 );

        if( aux > max )
            max = aux;
    } 
    Cache->insert({{x0, y0, x1, y1}, max});
    return max;    
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    unnot_ordered_map< array<int,4> , int, ArrayHasher >  Cache;
    int max = 0, x1, y1, **Matrix;

    Matrix = (int **) malloc(sizeof(int *) * 600 );
    for (size_t i = 0; i < 600; i++)
    {
        Matrix[i] = (int *) malloc(sizeof(int) * 600 );
    }
    
    cin >> y1 >> x1;
    while( x1 != 0 || y1 != 0 )
    {        
        Cache.clear();
        for (int i = 0; i < x1; i++)
            for(int j = 0; j < y1; j++)
                cin >> Matrix[j][i];
        
        max = l_sub( Matrix, 0, &Cache, 0, 0, x1, y1 );

        cout << max << endl;
        cin >> y1 >> x1;   
    }

    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;

struct ArrayHasher {
    std::size_t operator()(const array<int, 4>& a) const {
        std::size_t h = 0;

        for (auto e : a) {
            h ^= std::hash<int>{}(e)  + 0x9e3779b9 + (h << 6) + (h >> 2); 
        }
        return h;
    }   
};

int l_sub( int **matrix, int max, unordered_map< array<int,4> , int, ArrayHasher > *Cache, int x0, int y0, int x1, int y1 )
{
    if( x0 + 1 == x1 && y0 + 1 == y1 )
        return 1;
    else if( x0 == x1 || y0 == y1 )
        return 0;
    if( Cache->find({x0, y0, x1, y1}) != Cache->end() ){
        //array<int,4> aux_arr = {x0, y0, x1, y1};
        //return (*Cache)[aux_arr'];
        return (*Cache)[{x0, y0, x1, y1}];
    }

    //int size_sub = (x1 - x0 )*( y1 - y0 );
    int aux = 0;//, last = matrix[y0][x0]-1;
    char not_ordered = 0;
    /*
    for (int i = x0; not_ordered&&i < x1; i++)
        for (int j = y0; not_ordered&&j < y1; j++)
        {
            not_ordered = not_ordered && (last < matrix[j][i]);
            last = matrix[j][i];
        }

    if( not_ordered )
    {
        Cache->insert({{x0, y0, x1, y1}, size_sub});
        return size_sub;
    }
    */
    for (int i = 0; i < 2 && not_ordered != 2 && max < (x1 - x0 - 1)*( y1 - y0 ) ; i++)
    {
        if( i == 0 ){
            aux = l_sub( matrix, 0, Cache, x0 + 1, y0, x1, y1 );
            if( !not_ordered && aux == (x1 - x0 - 1)*( y1 - y0 ) ){
                if( x0 + 1 == x1 )
                {
                    for (int y = y0; !not_ordered && y < y1 - 1; y++)
                    {
                        not_ordered = not_ordered || (matrix[y][x0] >= matrix[y + 1][x0]); 
                    }
                }
                else{
                    not_ordered = not_ordered || matrix[y0][x0] >= matrix[y0][x0+1];
                    for (int y = y0+1; !not_ordered && y < y1; y++)
                    {
                        not_ordered = not_ordered || matrix[y - 1][x1-1] >= matrix[y][x0] || matrix[y][x0] >= matrix[y][x0+1]; 
                    }
                }
                   
                if(!not_ordered)
                {
                    max = (x1 - x0 )*( y1 - y0 );
                    not_ordered = 2;
                }
                else
                    not_ordered = 1;
            }                
        }else{
            aux = l_sub( matrix, 0, Cache, x0, y0, x1 - 1, y1 );
            if( !not_ordered && aux == (x1 - x0 - 1)*( y1 - y0 ) ){
                if( x0 + 1 == x1 )
                {
                    for (int y = y0; !not_ordered && y < y1 - 1; y++)
                    {
                        not_ordered = not_ordered || (matrix[y][x0] >= matrix[y + 1][x0]); 
                    }
                }
                else{
                    for (int y = y0; !not_ordered && y < y1; y++)
                    {
                        not_ordered = not_ordered || (matrix[y][x1-2] >= matrix[y][x1 - 1])|| (matrix[y][x1-1] >= matrix[y+1][x0]); 
                    }
                }
                if(!not_ordered)
                {
                    max = (x1 - x0 )*( y1 - y0 );
                    not_ordered = 2;
                }
                else
                    not_ordered = 1;
            }  
        }
        
        if( aux > max ){
            max = aux;
        }
    }
    
    for (int i = 0; i < 2 && not_ordered != 2 && max < (x1 - x0 )*( y1 - y0 -1 ) ; i++)
    {
        if( i == 0 ){
            aux = l_sub( matrix, 0, Cache, x0, y0 + 1, x1, y1 );
            if( !not_ordered && aux == (x1 - x0)*( y1 - y0 - 1 ) ){
                for (int x = x0; !not_ordered && x < x1-1; x++)
                {
                    not_ordered = not_ordered || (matrix[y0][x] >= matrix[y0][x+1]);
                }
                not_ordered = not_ordered || ( y0+1 != y1 && matrix[y0][x1-1] >= matrix[y0+1][x0]);
                if(!not_ordered)
                {
                    max = (x1 - x0 )*( y1 - y0 );
                    not_ordered = 2;
                }
                else
                    not_ordered = 1;
            }
        }else{
            aux = l_sub( matrix, 0, Cache, x0, y0, x1, y1 - 1 );
            if( !not_ordered && aux == (x1 - x0)*( y1 - y0 - 1 ) ){
                not_ordered = not_ordered || ( y0+1 != y1 && matrix[y1-2][x1-1] >= matrix[y1-1][x0]);
                for (int x = x0; !not_ordered && x < x1-1; x++)
                {
                    not_ordered = not_ordered || (matrix[y1-1][x] >= matrix[y1-1][x+1]);
                }

                if(!not_ordered)
                {
                    max = (x1 - x0 )*( y1 - y0 );
                    not_ordered = 2;
                }
                else
                    not_ordered = 1;
            }
        }

        if( aux > max )
            max = aux;
    } 
    Cache->insert({{x0, y0, x1, y1}, max});
    return max;    
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    unordered_map< array<int,4> , int, ArrayHasher >  Cache;
    int max = 0, x1, y1, **Matrix;

    Matrix = (int **) malloc(sizeof(int *) * 600 );
    for (size_t i = 0; i < 600; i++)
    {
        Matrix[i] = (int *) malloc(sizeof(int) * 600 );
    }
    
    cin >> y1 >> x1;
    while( x1 != 0 || y1 != 0 )
    {        
        Cache.clear();
        for(int j = 0; j < y1; j++)
            for (int i = 0; i < x1; i++)
                cin >> Matrix[j][i];
        
        max = l_sub( Matrix, 0, &Cache, 0, 0, x1, y1 );

        cout << max << endl;
        cin >> y1 >> x1;   
    }

    return 0;
}