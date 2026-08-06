#include <iostream>
using namespace std;
                 
int linearsearch(int *arr, int size, int key) {
    for(int i=0; i<size; i++) {
        if(arr[i]==key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[]={2,7,1,3,12,5,9};
    int size=sizeof(arr)/sizeof(int);
    int key=20;
    cout<<linearsearch(arr, size, key)<<endl;        
    return 0;
}