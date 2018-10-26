#include<iostream>
using namespace std;


int main(int argc, char const *argv[]) {
  int a=5;
  int* b = &a;
  int** c = &b;
  std::cout << "a: "<<a << '\n';
  std::cout << "b: "<<b << '\n';
  std::cout << "c: "<<c << '\n';

  std::cout << "------------" << '\n';
  
  std::cout << "*b: "<<*b << '\n';
  std::cout << "*c: "<<*c << '\n';
  std::cout << "**c: "<<**c << '\n';
  return 0;
}
