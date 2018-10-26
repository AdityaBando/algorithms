#include<iostream>
using namespace std;

int binarySearch(int LIST[], int left, int right, int x)
{
   if (right >= left)
   {
        int mid = (left + right)/2;
        if (LIST[mid] == x)
          return mid;
        else{
          if (LIST[mid] > x)
            return binarySearch(LIST, left, mid-1, x);
          else
            return binarySearch(LIST, mid+1, right, x);
          }
   }
   return -1;
}

int main(void)
{  int LIST[] = {20, 31, 43, 100, 401};
   int n = sizeof(LIST);
   int x;
   int flag=0;
   while (!flag) {
     std::cout << "binarySearch (-1 to quit)...";
     cin>>x;
     if (x==-1) {//to exit while loop
       flag=1;
     }
     int result = binarySearch(LIST, 0, n-1, x);
     (result==-1)?std::cout << "Not found." << '\n' : std::cout << "At position " << result+1 <<'\n';
   }

   return 0;
}
