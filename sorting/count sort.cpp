//time complexity: O(n+k)
//space complexity: O(n+k)
#include <iostream>
using namespace std;
void countSort(int *arr, int size) {
    int minVal=INT32_MAX, maxVal=INT32_MIN;
    int freq[100000];
    for(int i=0; i<size; i++) {
        minVal=min(minVal, arr[i]);
        maxVal=max(maxVal, arr[i]);
    }
    for(int i=0; i<size; i++) {
        freq[arr[i]]++;
    }
    for(int i=minVal, j=0; i<=maxVal; i++) {
        while(freq[i]>0) {
            arr[j++]=i;
            freq[i]--;
        }
    }
    for(int i=0; i<size; i++) {
          cout<<arr[i]<<" ";
    }
    cout<<endl;
}
                    
int main() {
           int arr[]={1,4,1,3,2,4,3,7};
           int size=sizeof(arr)/sizeof(int);
           countSort(arr, size); 
    return 0;
}