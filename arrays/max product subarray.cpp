#include <iostream>
using namespace std;

void proSubArray(int *arr, int size) {
    int product=1, maxPro=INT32_MIN;
    for(int i=0; i<size; i++) {
        product*=arr[i];
        maxPro=max(maxPro, product);
    }
    cout<<maxPro<<endl;
}
                    
int main() {
         int arr[]={-2,0,-1};
         int size=sizeof(arr)/sizeof(int);
           proSubArray(arr, size); 
    return 0;
}