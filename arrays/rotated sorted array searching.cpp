#include <iostream>
using namespace std;
        int search(int *arr, int size, int target) {
            int start=0, end=size-1;
            while(start<=end) {
                int mid=(start+((end-start)/2));
                if(arr[mid]==target) return mid;

                if(arr[start]<=arr[mid]) {
                    if(arr[start]<=target && target<=arr[mid]) {
                        end=mid-1;
                    } else {
                        start=mid+1;
                    }
                } else {
                    if(arr[mid]<target && target<=arr[end]) {
                        start=mid+1;
                    } else {
                        end=mid-1;
                    }
                }
            }
            return -1;
        }           
int main() {
           int arr[]={4,5,6,7,0,1,2};
           int size=sizeof(arr)/sizeof(int);
           int target=0;
           cout<<search(arr, size, target); 
    return 0;
}