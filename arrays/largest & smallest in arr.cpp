#include <iostream>
using namespace std;
                    
int main() {
      int arr[5]={2,6,1,9,3};
      int size=sizeof(arr)/sizeof(arr[0]);
      int max=arr[0];
      int min=arr[0];
      for(int i=0; i<size; i++) {
        if(max<arr[i]) {
            max=arr[i];
            cout<<"updating max : "<<arr[i]<<endl;
        }
        if(min>arr[i]) {
            min=arr[i];
            cout<<"updating min : "<<arr[i]<<endl;
        }
      }  
      cout<<"Max = "<<max<<endl;    
      cout<<"Min = "<<min<<endl;
    return 0;
}