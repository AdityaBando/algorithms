#include<iostream>
using namespace std;

typedef struct element{
  int data;
  element *next;
} element;

typedef struct stack{
  element* null=0;
  element* top;
} stack;


/*int stack_traversal(element* ptr){ //for viewing purpose only
  std::cout << "traversal is running..." << '\n';
  while (ptr->next!=0) {
    std::cout << "running loop.." << '\n';
    std::cout << ptr->data << ' ';
    ptr=ptr->next;
  }
  std::cout << "traversal finished!!" << '\n';


}

int push(stack &s, int x){
  element* previous=s.top;
  s.top= new element;
  if(s.top==0){
    s.top->data=x;
    s.null=s.top;
    s.top->next=0;
  }
  else{
    s.top->data=x;
    previous->next=s.top;
    s.top->next=0;
  }

}









int main() {
  stack s;

  //pusher:
  char ch;
  cout<<"\npush: ";
  do{
      int x;
      std::cout << ">>>" ;
      cin>>x;
      push(s,x);
      cout<<"\nmore? ";
      cin>>ch;
  }
  while(ch=='y');

  stack_traversal(s.null);

  return 0;
}
