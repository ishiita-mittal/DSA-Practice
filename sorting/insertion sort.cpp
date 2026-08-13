#include <iostream>
#include<algorithm>
using namespace std;

void insertionSort(int *arr, int size) {
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
        int arr[]={7,2,8,4,3,5,9};
        int size=sizeof(arr)/sizeof(int);    
        insertionSort(arr, size);
    return 0;
}