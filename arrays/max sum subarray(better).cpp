#include <iostream>
using namespace std;
                    
    void sumSubArray(int *arr, int size) {
        int maxSum=INT32_MIN;
        cout<<"All possible sums: "<<endl;
        for(int start=0; start<size; start++) {
            int sum=0;
            for(int end=start; end<size; end++) {
                sum+=arr[end];
                maxSum=max(maxSum, sum);
                cout<<sum<<" , ";
            }
            cout<<endl;
        }
        cout<<"Max sum ="<<maxSum<<endl;
    }

int main() {
            int arr[]={2,-3,6,-5,4,2};
            int size=sizeof(arr)/sizeof(int); 
            sumSubArray(arr, size);
    return 0;
}