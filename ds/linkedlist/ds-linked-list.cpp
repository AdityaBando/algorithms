#include<iostream>
using namespace std;

typedef struct thing{
  int data;
  thing* next=NULL;
} thing;

thing* newelement(int data){
  thing* n_ele= new thing;
  n_ele->data = data;//data is just a pointer and also the n_ele's data is a pointer. So assignment works effortlessly.
  n_ele->next = NULL;
  return n_ele;
}

thing* addfront(thing* head, thing* p){
  p->next = head;
  return p;
} // this also works when head is null;

thing* addend(thing* head, thing* p){
  if (head==NULL) {
    return p;
  }
  else //we will go till end and then add there
    {
      thing** tracer = &head;

      while (*tracer != NULL) {
        tracer = &(*tracer)->next;
      }
      std::cout << "now we are at end of the list" << '\n';
      (*tracer)->next = p;
    }
    return head;
}


void printlist(thing** head) {
  thing** tracer=head;
  while ((*tracer)!=NULL) {
    std::cout << (*tracer)->data << '\n';
    tracer = &((*tracer)->next);
  }
}




int main(int argc, char const *argv[]) {

  thing* t1,* t2;
  thing* obj1,* obj2,* obj3;
  std::cout << "creating 3 elements..." << '\n';
  obj1= newelement(1);
  obj2=newelement(2);
  obj3=newelement(3);


  std::cout << "running addend()..." << '\n';
  addend(t1, obj1);
  addend(t1, obj2);
  addend(t1, obj3);
  printlist(&t1);


  std::cout << "running addfront()..." << '\n';
  addfront(t2, obj1);
  addfront(t2, obj2);
  addfront(t2, obj3);
  printlist(&t2);

  return 0;
}
