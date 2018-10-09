#include<iostream>
using namespace std;

typedef struct element{
  int data;
  element *next=NULL;
} element;

typedef struct stack{
  element* list=NULL;
  element** top=NULL;
} stack;


int element_traversal(element* ptr){
  std::cout << "{" << ' ';

  while (ptr!=NULL) {
    std::cout << ptr->data << ' ';
    ptr= ptr->next;
  }

  std::cout << "}" << '\n';
}

element* push(stack s,int x){
  if (s.list==NULL) {
    s.list=new element;
    s.top=&(s.list);
    (s.list)->data=x;
    (s.list)->next=NULL;
  }
  else{
    element* p_ele=new element;
    s.top=&p_ele;
    p_ele->data=x;
    p_ele->next=s.list;
    s.list=*s.top;
  }
  return s.list;
}

int main(int argc, char const *argv[]) {
  stack s;

  element_traversal(push(s,1));
  element_traversal(push(s,2));
  return 0;
}
