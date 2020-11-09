//
// Created by pedro on 05/11/2020.
//
#include<iostream>
//#include "iomanip"
using namespace std;


int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    unsigned short int number;

    cin >> number;

    switch (number) {
        case 1:
//            January - 31 days
            cout << "January" << endl;
            return 0;
        case 2:
            cout << "February" << endl;
            return 0;
        case 3:
            cout << "March" << endl;
            return 0;
        case 4:
            cout << "April" << endl;
            return 0;
        case 5:
            cout << "May" << endl;
            return 0;
        case 6:
            cout << "June" << endl;
            return 0;
        case 7:
            cout << "July" << endl;
            return 0;
        case 8:
            cout << "August" << endl;
            return 0;
        case 9:
            cout << "September" << endl;
            return 0;
        case 10:
            cout << "October" << endl;
            return 0;
        case 11:
            cout << "November" << endl;
            return 0;
        case 12:
            cout << "December" << endl;
            return 0;
    }

    return 0;
}