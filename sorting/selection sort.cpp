#include <iostream>
using namespace std;

void selection(int *arr, int size) {
    for(int i=0; i<size-1; i++) {
        int minIdx=i;
        for(int j=i; j<size; j++) {
            if(arr[j]<arr[minIdx]) {
            minIdx=j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

void print(int *arr, int size) {
    selection(arr, size);
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}
                    
int main() {
        int arr[]={3,1,8,4,2,0,7,9,5};
        int size=sizeof(arr)/sizeof(int); 
        print(arr, size);   
    return 0;
}