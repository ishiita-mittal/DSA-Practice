#include <iostream>
using namespace std;

void fun(int nums[]) {
    nums[0]=10;
}
                    
int main() {
      int arr[]={1,2,3,4,5};
      fun(arr);   
      cout<<arr[0];   
    return 0;
}