//time complexity: O(log n)
//space complexity: O(1)

#include <iostream>
#include<vector>
using namespace std;

    int search(vector<int>& nums, int target) {
        int start=0, end=nums.size()-1;
        while(start<=end) {
            int mid=start+(end-start)/2;
            if(nums[mid]==target) {
                return mid;
            }
            else if(nums[mid]<target) {
                start=mid+1;
            }
            else {
                end=mid-1;
            }
        }
        return -1;
    }

int main() {
           vector<int>nums={2,4,6,8,10,12};
           int target=10;
           cout<<search(nums,target); 
    return 0;
}