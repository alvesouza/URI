//
// Created by pedro on 05/11/2020.
//
#include<iostream>

using namespace std;


int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    short unsigned int ddd;

    cin >> ddd;

    switch (ddd) {
        case 61:
            cout << "Brasilia" << endl;
            return 0;
        case 71:
            cout << "Salvador" << endl;
            return 0;
        case 11:
            cout << "Sao Paulo" << endl;
            return 0;
        case 21:
            cout << "Rio de Janeiro" << endl;
            return 0;
        case 32:
            cout << "Juiz de Fora" << endl;
            return 0;
        case 19:
            cout << "Campinas" << endl;
            return 0;
        case 27:
            cout << "Vitoria" << endl;
            return 0;
        case 31:
            cout << "Belo Horizonte" << endl;
            return 0;
        default:
            cout << "DDD nao cadastrado" << endl;
            return 0;
    }
//    cout << ddd << endl;


    return 0;
}