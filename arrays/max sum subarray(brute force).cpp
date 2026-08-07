#include <iostream>
using namespace std;

   void sumSubArray(int *arr, int size) {
    int maxSum=INT32_MIN;
    cout<<"Possible sums are: "<<endl;
     for(int start=0; start<size; start++) {
         for(int end=start; end<size; end++) {
            int sum=0;
             for(int i=start; i<=end; i++) {
             sum+=arr[i];
             }
             cout<<sum<<",";
             maxSum=max(sum, maxSum);
        }
             cout<<endl;
    }
    cout<<"Maximum sum is: "<<maxSum;
 }
                    
int main() {
          int arr[]={2,-3,6,-5,4,2};
          int size=sizeof(arr)/sizeof(int); 
          sumSubArray(arr, size); 
    return 0;
}