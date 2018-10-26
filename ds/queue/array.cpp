//QUEUE using array in C++
//Circular queue using array in C++


#include <iostream>
using namespace std;
const int SIZE=10;

static int front=-1;
static int rear=-1;

void ENQUEUE(int *list, int x) {
  if ((front==0 && rear==SIZE-1)||
      (front==rear+1)) {
        std::cout << "ERROR: list is full!!" << '\n';
        return; //queue is full
  }

  if (rear==SIZE-1 && front>=0) {//see below. ####
    rear=0;
  }
  else{
    rear=rear+1;
  }

  if (front==-1) {// see up there ^^^^^ ####
    front++;
  }

  *(list+rear)=x;

}

int DEQUEUE(int *list){
  if (front==rear) {
    exit(0);
  }

  int x= *(list+front);
  if (front==SIZE-1) {
    front=0;
    return x;
  }
  else{
    front=front+1;
    return x;
  }
}

void viewlist(int list[]) {
  std::cout << "list (with garbage vals):" << '\n';
  std::cout << "{" << ' ';
  for (size_t i = 0; i < SIZE; i++) {
    std::cout << list[i] << ' ';
  }
  std::cout << "}" << '\n';
  std::cout << "front at location "<<front+1 << '\n';
  std::cout << "rear at location " <<rear+1 << '\n';
}

int main() {
  int list[SIZE];

  std::cout << "ENQUEUEuing..." << '\n';
  ENQUEUE(list,1); ENQUEUE(list, 2);  ENQUEUE(list, 3); ENQUEUE(list, 4);
  ENQUEUE(list,5); ENQUEUE(list, 6);
  ENQUEUE(list, 7); ENQUEUE(list,8); ENQUEUE(list, 9); ENQUEUE(list, 10);
  ENQUEUE(list, 11); ENQUEUE(list,12); ENQUEUE(list, 13);
  viewlist(list);

  std::cout << "DEQUEUEing..." << '\n';
  std::cout << "deleted value is "<<DEQUEUE(list) << '\n';
  std::cout << "deleted value is "<<DEQUEUE(list) << '\n';
  std::cout << "deleted value is "<<DEQUEUE(list) << '\n';
  viewlist(list);

  std::cout << "ENQUEUEuing more things:" << '\n';
  ENQUEUE(list,14);ENQUEUE(list, 15);ENQUEUE(list, 16);ENQUEUE(list,17);
  viewlist(list);

  return 0;
}
