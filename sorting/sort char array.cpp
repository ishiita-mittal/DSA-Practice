#include <iostream>
#include<algorithm>
using namespace std;
             
void insertionSort(char *arr, int size) {
    for(int i=1; i<size; i++) {
        int curr=arr[i], prev=i-1;
        while(prev>=0 && arr[prev]>curr) {
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
          char arr[]={'a', 'd', 'b', 'i', 'c'};
          int size=sizeof(arr)/sizeof(char);
          insertionSort(arr, size);  
    return 0;
}