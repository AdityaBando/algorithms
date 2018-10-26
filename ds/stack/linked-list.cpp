#include<iostream>
using namespace std;


typedef struct thing{
  int data;
  thing* next;
} thing;

thing* head=NULL;

thing* create_element(int data){
  thing* thatelement= (thing*)malloc(sizeof(thing));
  thatelement->data = data;
  thatelement->next = NULL;

  return thatelement;
}

thing* push(thing** hed, thing* thatelement) { //THE global head has nothing to do with this.
  thing** tracer=hed;


  thatelement->next = *tracer;
  head= thatelement;
  return head;
}

int pop(){ //returns head of the list and, deleted item is stored in static variable x
  thing** tracer= &head;
  // the function basically ignores popping operation empty list.
  if (*tracer) {
    int x = (*tracer)->data;
    tracer= &((*tracer)->next);
    free(head);
    head = *tracer;
    return x;
  }
  else{
    std::cout << " not compledted. Can't pop empty list. Returning" << ' ';
    return -1;
  }
}

void printstack(thing** head) {
  thing** tracer= head;
  std::cout << "head->" << ' ';
  while (*tracer) {
    std::cout << (*tracer)->data << " -> ";
    tracer = &(*tracer)->next;
  }
  std::cout << "NULL" << '\n';
}


int main(int argc, char const *argv[]) {

  push(&head,create_element(1));
  push(&head, create_element(4));push(&head, create_element(6));
  push(&head, create_element(2)); push(&head, create_element(12));
  push(&head,create_element(16) ); push(&head,create_element(11) );
  printstack(&head);

  std::cout << "Popped "<<pop() << '\n';
  std::cout << "Popped "<<pop() << '\n';
  std::cout << "Popped "<<pop() << '\n';
  std::cout << "Popped "<<pop() << '\n';
  std::cout << "Popped "<<pop() << '\n';
  std::cout << "Popped "<<pop() << '\n';
  std::cout << "Popped "<<pop() << '\n';
  std::cout << "Popped "<<pop() << '\n';

  printstack(&head);



  return 0;
}
