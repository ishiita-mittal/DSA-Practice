#include <iostream>
using namespace std;

void copyArr(int *arr, int size) {
    int temp[size];
    for(int i=0; i<size; i++) {
        int j=size-i-1;
        temp[i]=arr[j];
    }

    for(int i=0; i<size; i++) {
        arr[i]=temp[i];
    }
}

void printArr(int *arr, int size) {
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
                    
int main() {
      int arr[]={1,2,3,4,5};
      int size=sizeof(arr)/sizeof(int);
      copyArr(arr, size);
      printArr(arr, size);

    return 0;
}