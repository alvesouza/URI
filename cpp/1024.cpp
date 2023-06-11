/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    u_int16_t n, j;
    string line, aux_line;

    cin >> n;
    getline(cin, line);
    while (n--)
    {
        getline(cin, line);
        aux_line = line;
        j = line.size() - 1;
        for(char c: line)
        {
            if( ( c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
            {
                aux_line[j--] = c + 3;
            }
            else{
                aux_line[j--] = c;
            }
        }

        for (u_int16_t j = aux_line.size()/2; j < aux_line.size(); j++)
        {
            aux_line[j] -= 1;
        }
        
        cout << aux_line << endl;        
    }
    return 0;
}
*/
//#include <iostream>
//#include <string>
#include<bits/stdc++.h>
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    unsigned int n;
    std::cin >> n;
    std::cin.ignore(); // Ignore the newline character after reading n

    while (n--) {
        std::string line;
        std::getline(std::cin, line);

        for (char& c : line) {
            if (std::isalpha(c)) {
                c = c + 3;
            }
        }

        std::reverse(line.begin(), line.end());

        for (std::size_t j = line.size() / 2; j < line.size(); j++) {
            line[j]--;
        }

        std::cout << line << '\n';
    }

    return 0;
}