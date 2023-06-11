/*
#include<iostream>
#include<queue>
#include<vector>

struct Home_Consuption{
    uint16_t qty, consuption;
};

struct ConsuptionOp
{
    bool operator()(const Home_Consuption& c1, const Home_Consuption &c2)
    {
        return c1.consuption > c2.consuption;
    }
};


int main()
{
    std::priority_queue<Home_Consuption, std::vector<Home_Consuption>, ConsuptionOp> pq;
    Home_Consuption hc;
    char buff;
    uint N = 1, i, total_consuption, total_qty;
    std::cin >>i;
    
    while ( i != 0 )
    {
        total_qty = 0;
        total_consuption = 0;
        for (uint j = 0; j < i; j++)
        {
            std::cin >> hc.qty >> hc.consuption;
            total_qty += hc.qty;
            total_consuption += hc.consuption;
            hc.consuption /= hc.qty;

            pq.push(hc);
        }
        
        std::cout << "Cidade# " << N << std::endl;

        while (!pq.empty())
        {
            hc = pq.top();
            pq.pop();

            std::cout << hc.qty << "-" << hc.consuption << " ";
        }
        std::cout << std::endl;
        printf("Consumo medio: %.2f m3\n\n", ((float )total_consuption)/total_qty);
        
        std::cin >>i;
        N++;
    }    
    return 0;
}
*/
#include<iostream>
#include<algorithm>

struct Home_Consuption{
    uint16_t qty, consuption;
};

int main()
{
    uint qty_consuption[201] = {0};
    Home_Consuption hc;
    char buff;
    bool there = false;
    uint N = 1, i, total_consuption, total_qty;
    std::cin >>i;
    
    while ( i != 0 )
    {
        there = false;
        total_qty = 0;
        total_consuption = 0;
        for (uint j = 0; j < i; j++)
        {
            std::cin >> hc.qty >> hc.consuption;
            total_qty += hc.qty;
            total_consuption += hc.consuption;
            qty_consuption[hc.consuption / hc.qty] += hc.qty;
        }
        
        std::cout << "Cidade# " << N << ":" <<std::endl;

        for (ushort i = 0; i < 201; i++)
        {
            if(qty_consuption[i] != 0)
            {
                if(there)
                    std::cout << " ";
                std::cout << qty_consuption[i] << "-" << i;
                there = true;
            }
        }
        std::cout << std::endl;
        printf("Consumo medio: %.2f m3.\n", (total_consuption*100/total_qty)/100.0);
        std::fill(qty_consuption, qty_consuption + 201, 0);
        std::cin >>i;
        N++;
        if( i != 0 )
            std::cout << std::endl;
        
    }    
    return 0;
}


