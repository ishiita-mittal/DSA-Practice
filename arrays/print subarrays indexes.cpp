#include <iostream>
using namespace std;

  void printSubArr(int arr[], int size) {
     cout<<"Starting and Ending indexes: "<<endl;
      for(int start=0; start<size; start++) {
         for(int end=start; end<size; end++) {
             cout<<"["<<start<<","<<end<<"] ";
         }
         cout<<endl;
     }
 }
                    
int main() {
       int arr[]={1, 2, 3, 4, 5};
       int size=sizeof(arr)/sizeof(int); 
       printSubArr(arr, size);    
    return 0;
}