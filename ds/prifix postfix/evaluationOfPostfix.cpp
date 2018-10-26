#include<iostream>
#include<cmath>
#define stacksize 1000
using namespace std;
class stack{public:
	int arr[stacksize];
	int i;
	void push(int data){
		i++;arr[i]=data;
	}
	void pop(){
		i--;
	}
	int top(){
		return arr[i];
	}
	int bottom(){
		return arr[0];
	}
	bool empty(){
		if(i==0){
		return true;}else {return false;}
		}
	};

int main(){
	cout<<"Enter the length of the string which you want to evaluate"<<endl;
	int n;cin>>n;cin.get();
	cout<<"Enter the postfix expression you want to evaluate"<<endl;
	int i=0;
	stack s;s.i=-1;
	while(i!=n){
		char c;cin>>c;i++;
		if(c=='+'){int a=s.top();s.pop();int b=s.top();s.pop();s.push(b+a);}
		else if(c=='-'){int a=s.top();s.pop();int b=s.top();s.pop();s.push(b-a);}
		else if(c=='*'){int a=s.top();s.pop();int b=s.top();s.pop();s.push(b*a);}
		else if(c=='/'){int a=s.top();s.pop();int b=s.top();s.pop();s.push(b/a);}
		else if(c=='$'){int a=s.top();s.pop();int b=s.top();s.pop();s.push(pow(b,a));}
		else{s.push(c-48);}
		}
	cout<<"The value of the postfix expression you entered is "<<s.top();
	}
	
