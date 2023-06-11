#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    std::string line;
    int_fast16_t v;
    uint_fast16_t t;

    while (std::getline(std::cin, line))
    {   
        std::istringstream iss(line);
        iss >> v >> t;     
        cout << 2*v*((int_fast16_t)t) << endl;
    }      

    return 0;
}