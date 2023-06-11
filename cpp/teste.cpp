#include <iostream>
using namespace std;

template<int size>
struct ConstArray{
  int arr[size];

  // 'constexpr' constructor:
  constexpr ConstArray():arr(){
    for(int i = 0; i < size; i++)
      arr[i] = i;
  }

  // This member function should have 'const':
  void print() const{
    for(int i = 0; i < size; i++)
      cout << arr[i] << endl;
  }
};

int main() {
  constexpr int n = 5;
  constexpr struct ConstArray<n> vetor;
  vetor.print();

  return 0;
}