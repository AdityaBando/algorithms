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
  while (ptr!=NULL) {
    std::cout << ptr->data << '\n';
    ptr= ptr->next;
  }
}

int push(stack s,int x){
  if (s.list==NULL) {
    s.list=new element;
    s.top=&(s.list);
    (s.list)->next=NULL;
  }
  else{
    element* p_ele=new element;
    s.top=&p_ele;
    p_ele->next=s.list;
    s.list=*s.top;
  }
}
