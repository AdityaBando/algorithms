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
