#include <iostream>
#include <algorithm>

bool comparer_function(int a, int b) {
    bool a_odd = a % 2, b_odd = b % 2;
    if (a_odd == b_odd) {
        return a_odd ? a > b : a < b;
    } else {
        return !a_odd;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int numbers[100000];
    int size;

    std::cin >> size;

    for (int i = 0; i < size; i++) {
        std::cin >> numbers[i];
    }

    std::sort(numbers, numbers + size, comparer_function);

    for (int i = 0; i < size; i++) {
        std::cout << numbers[i] << '\n';
    }
    return 0;
}