#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  char str[]="this is a string.";
  //not allowed now: char* ptr="this is also a string.";
  char* ptr=str;

  std::cout << "we can print string just by writing <<str cant belive?" << '\n';

  std::cout << "str: "<<str << '\n';
  std::cout << "ptr: "<<ptr << '\n';

  //not allowed: std::cout << "str++: "<<str++ << '\n';
  ptr++;
  std::cout << "ptr++: "<<ptr << '\n';
  return 0;
}

//nTAKEAWAY: We can increase the pointer variable, but not pointer constant
// and we can print the string directy inlike array.
