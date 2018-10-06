#include<iostream>
using namespace std;

typedef struct stack{
int list[10]={0,0,0,0,0,0,0,0,0};
int top=-1;
} stack;


void printstack(stack s){
    std::cout << "{" ;
    for(int i=0;i<10;i++){
    cout<<' '<<s.list[i];
    }
    std::cout << "}" << '\n';
}

int push(stack &s, int x){
    if(s.top==10-1){
        std::cout << "Stack Overflow!!!" << '\n';
        return 1;
        }
    else
        s.top=s.top+1;
        s.list[s.top]=x;
        return 0;
}

int pop(stack &s){
    if(s.top==-1){
        std::cout << "Stack underflow!!!" << '\n';
        return 0;}
    else
        s.top=s.top-1;
        return s.list[s.top+1];
}









main(){
stack s;
std::cout << "Original stack: " << '\n';
printstack(s);

//the pusher below(in comments) works:
char ch;
/*cout<<"\nPush here: ";
do{
    int x;
    cin>>x;
    push(s,x);
    cout<<"\nPush more? ";
    cin>>ch;
}
while(ch=='y'); */
push(s,1);push(s,2);push(s,3);push(s,4);pop(s);push(s,5);push(s,6);push(s,7);
push(s,8);push(s,9);pop(s);push(s,10);push(s,11);pop(s);push(s,12);push(s,13);
push(s,14);push(s,15);
std::cout << "stack now: " << '\n';
printstack(s);

std::cout << "pop? " << '\n';
cin>>ch;
while(ch=='y'){

    std::cout  << pop(s) << " popped. Wanna pop more? "<< '\n';
    cin>>ch;
};
std::cout << "\nnow we have s.top = " <<s.top<< " and below is the stack "<<'\n';
std::cout << "along with garbage values." << '\n';
printstack(s); /// will print garbage values as well.

return 0;
}
