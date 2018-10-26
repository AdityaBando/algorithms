#include<iostream>
using namespace std;


struct thing{
  int data;
  thing* next;
};

thing* front=NULL;
thing* rear= NULL;

thing* newelement(int x){
  thing* thatelement= (thing*)malloc(sizeof(thing));
  thatelement->data= x;
  thatelement->next= NULL;

  return thatelement;
}

void enqueue(thing* thatelement) {
  if (front==NULL) {
    front=thatelement;
    rear=thatelement;
  }
  else{
    thatelement->next=rear;
    front->next= thatelement;
    rear=thatelement;
  }
}

int dequeue(){
  int x;
  thing* ptr=front;
  if ((front==NULL) && (rear==NULL)) {
    std::cout << "Operation can't be completed. Return " << ' ';
    return -1;
  }
  else if (front==rear) {
    x=front->data;
    free(front);
    front=NULL; //why do i always forget to update this?
    rear=NULL; //TAKE HOME LESSON: always cross check the updation of variables you are working on.
    return x; // We need to return x right now because, otherwise that common part of code will be executed which is unnecessary.
  }
  else{
    while((ptr->next!=NULL) && (ptr->next != front) ){
      x=front->data;
      ptr=ptr->next; //now we are behind front
    }

    //this is the common part of the function.
    ptr->next=rear;
    free(front); //who will update front?
    front=ptr;  //now i have.
    return x;
  }
}
/*

WHY TF THIS ISN'T WORKING?
void showlist() {
  thing** tracer=&front;
  while ((*tracer) && (*tracer != front)) {
    std::cout << (*tracer)->data << " -> ";
    tracer= &((*tracer)->next);
  }

  std::cout << (*tracer)->next << '\n';
}
*/
void showlist() {
  thing* ptr= rear;

  if (front==NULL) {
    std::cout << "Queue is empty" << '\n'; //this is a quick fix.
    return;
  }
  std::cout << "Right one will be served first:" << '\n';
  while ((ptr->next!= NULL) && (ptr->next != rear)) {
    std::cout << ptr->data << " -> ";
    ptr = ptr->next;
  }
  //now we are at front but we haven't printed it yet.
  std::cout << ptr->data << '\n';
}


int main(int argc, char const *argv[]) {
  std::cout << "enqueueing..." << '\n';
  enqueue(newelement(1)); enqueue(newelement(2));
  enqueue(newelement(3)); enqueue(newelement(4));
  enqueue(newelement(5));
  showlist();

  std::cout << "Dequeued "<<dequeue() << '\n';
  std::cout << "Dequeued "<<dequeue() << '\n';
  std::cout << "Dequeued "<<dequeue() << '\n';
    std::cout << "Dequeued "<<dequeue() << '\n';
      std::cout << "Dequeued "<<dequeue() << '\n';
        std::cout << "Dequeued "<<dequeue() << '\n';
  showlist();

  return 0;
}
