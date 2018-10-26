#include<iostream>
using namespace std;

void func(char start,char aux,char top,int n){
    if(n==0)return;
    func(start,top,aux,n-1);
    cout<<"Move "<<n<<" disk from "<<start<<" to "<<top<<endl;
    func(aux,start,top,n-1);
}
int main(){
    int n;cin>>n;
    char a='a';//start
    char b='b';//aux
    char c='c';//top
    func(a,b,c,n);
}
