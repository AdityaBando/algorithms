//bubble sort implementation in C++

#include<iostream>
using namespace std;

int main(){
  int n;
  std::cout << "Enter size..." << ' ';
  cin>>n;
  int array[n],i=0,j,k=0;
  std::cout << "Enter elements:" << ' ';
  for(i=0;i<n;i++){cin>>array[i];}
  for(k=0;k<n-1;k++){
    for(j=0;j<n-k-1;j++){
      if(array[j]>array[j+1]){
        swap (array[j],array[j+1]);
      }
    }
	}
  std::cout << "Sorted array:" << ' ';
  for(int i=0;i<n;i++){
    cout<<array[i]<<' ';
  }
}
