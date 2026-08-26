#include <iostream>
#include<algorithm>
using namespace std;
                    
int main() {
      int arr[] = {2,7,1,4,8,3};
      int size=sizeof(arr)/sizeof(int);
      sort(arr, arr+size, greater<int>());
          for(int i=0; i<size; i++) {
           cout<<arr[i]<<" ";
      }
    return 0;
}