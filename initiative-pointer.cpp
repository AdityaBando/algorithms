#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int i=10; char c='c';
  int* iptr=&i; //learned: int* return type wale address store krte hain.
  char* cptr=&c;

  std::cout << "*iptr="<<*iptr << '\n';
  std::cout << "*cptr="<<*cptr << '\n';

  std::cout << "iptr="<<iptr << '\n';
  std::cout << "cptr="<<cptr << '\n';
  return 0;
}

/*

lesson learned: Pointer stores address. iptr is a pointer, not *iptr. Similarly
*iptr contains data not iptr.

*/
