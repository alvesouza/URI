#include<bits/stdc++.h>
using namespace std;

ulong n_row( unsigned long long warriors )
{
    unsigned long long aux, begin = 0, end = warriors, aux_total, res;

    while (end >= begin)
    {
        aux = begin + (end - begin)/2;
        aux_total = aux*(aux + 1) / 2;
        if(aux_total <= warriors)
        {
            begin = aux + 1;
            res = aux;
        }
        else{
            end = aux - 1;
        }
    }
    
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    unsigned long long i, number;
    for (cin >> i; i; i--)
    {
        cin >> number;
        cout << n_row(number) << endl;
    }
    

    return 0;
}
