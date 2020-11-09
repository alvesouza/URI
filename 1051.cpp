//
// Created by pedro on 05/11/2020.
//
#include<iostream>
#include "iomanip"
using namespace std;


int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    float salary;
    float tax;
    cin >> salary;
    {
        bool taxa01 = (salary < 3000.00), taxa02 = (salary < 4500.00);
        tax = (salary > 2000.00) * (taxa01 * (salary-2000.00) * 0.08 + (!taxa01)*(taxa02*(
                salary - 3000.00)*0.18 + (!taxa02)*((salary - 4500.00)*0.28 + 270.00) + 80.00
                        ) );
    }

    if (tax > 0)
        cout << "R$ " <<fixed << setprecision(2) << tax << endl;
    else
        cout << "Isento\n";

    return 0;
}