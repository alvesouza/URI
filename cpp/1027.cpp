#include<stdio.h>
#include<iostream>
#include<queue>
#include<vector>
#include<limits>
#include <algorithm>

struct Point{
    int x,y;
};

struct xComparator{
    bool operator()( const Point& p1, const Point& p2 )
    {
        return p1.x > p2.x;
    }
};

int main()
{
    const int min_short = -std::numeric_limits<short>::min();
    const Point PMin = {std::numeric_limits<int>::min(), std::numeric_limits<int>::min()};
    unsigned short Number_Points;

    std::priority_queue<Point, std::vector<Point>, xComparator> pq;
    Point aux_point;
    Point Last_Points_X[std::numeric_limits<unsigned short>::max() + 2];
    unsigned short Wave_Center[std::numeric_limits<unsigned short>::max() + 2];
    int Max;
    int c = 0;
    while (std::cin >> Number_Points)
    {
        c++;
        std::fill(std::begin(Wave_Center), std::end(Wave_Center), 0);
        std::fill(std::begin(Last_Points_X), std::end(Last_Points_X), PMin);
        Max = 0;
        /* code */
        /*
        if(c == 51)
            std::cout << Number_Points << std::endl;
        */
        while ( Number_Points > 0 )
        {
            std::cin >> aux_point.x >> aux_point.y;
            /*
            if(c == 51)
                std::cout << aux_point.x << " " << aux_point.y << std::endl;
            */
            pq.push(aux_point);
            Number_Points--;
        }

        while ( !pq.empty() )
        {
            aux_point = pq.top();
            pq.pop();

            if( Last_Points_X[aux_point.y + 1 + min_short].x < aux_point.x && Last_Points_X[aux_point.y + 1 + min_short].y != aux_point.y )
            {
                Wave_Center[aux_point.y + 1 + min_short]++;
                if( Wave_Center[aux_point.y + 1 + min_short] > Max )
                    Max = Wave_Center[aux_point.y + 1 + min_short];
                Last_Points_X[aux_point.y + 1 + min_short] = aux_point;
            }

            if( Last_Points_X[aux_point.y - 1 + min_short].x < aux_point.x && Last_Points_X[aux_point.y - 1 + min_short].y != aux_point.y )
            {
                Wave_Center[aux_point.y - 1 + min_short]++;
                if( Wave_Center[aux_point.y - 1 + min_short] > Max )
                    Max = Wave_Center[aux_point.y - 1 + min_short];
                Last_Points_X[aux_point.y - 1 + min_short] = aux_point;
            }
        }
        
        std::cout << Max << std::endl;
                
    }
    
    return 0;
}