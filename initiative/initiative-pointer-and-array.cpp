#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int array[]={1,2,3,4,5,6,7,8};
  int* ptr= array;

  std::cout << "using pointer instead of list, this is so sickinig:" << '\n';
  for (size_t i = 0; i < 8; i++) {
    std::cout << ptr[i] << ' ';
  }
  std::cout << "\nor we can also do like this(this is dope.): " << '\n';
  for (size_t i = 0; i < 8; i++) {
    std::cout << *(ptr+i) << ' ';
    //alternatively: std::cout << *(ptr++) << ' ';
  }
  std::cout << "\nTAKEAWAY: " << '\n';
  std::cout << "so we can see that c++ is smart enough to multiply 2 for integers " << '\n';
  std::cout << "and 8 for double. That's why we need to declare the type of pointer." << '\n';
  std::cout << "so that it can do the multiplication easily." << '\n';

  std::cout << "\neven better:" << '\n';
  for (size_t i = 0; i < 8; i++) {
    std::cout << *(array+i) << ' ';
    //we just can't do this: std::cout << *(array++) << '\n';
    //as array is a pointer constant. we can do this with ptr because ptr is
    //pointer variable.
  }
  std::cout << '\n';
  std::cout << "can we print array directy by just name let's try out: "<<array << '\n';
  std::cout << "no because *array* contains address of the first element." << '\n';
  std::cout << "or we can say that its a constant, *a pointer constant*." << '\n';
  return 0;
}

/*there is a really odd pointer which can point to any thing. and it is pointer
to void declared like this:
void* ptr;
*/
