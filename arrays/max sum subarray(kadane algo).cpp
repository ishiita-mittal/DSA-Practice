#include <iostream>
using namespace std;
         
     void sumSubArray(int *arr, int size) {
        int sum=0, maxSum=INT32_MIN;
        cout<<"All possible sums: "<<endl;
        for(int i=0; i<size; i++) {
              sum+=arr[i];
              maxSum=max(maxSum, sum);
              cout<<sum<<" , ";
              if(sum<0) {
                sum=0;
              }
           }
        cout<<endl;
        cout<<"Maximum sum is : "<<maxSum<<endl;
     }

int main() {
            int arr[]={2,-3,6,-5,4,2};
            int size=sizeof(arr)/sizeof(int); 
            sumSubArray(arr, size);
    return 0;
}