#include <iostream>
#include<vector>
using namespace std;
        
vector<long long int> twoSum(vector<int>& nums, int target) {
        for(long long int i=0; i<nums.size(); i++) {
            for(long long int j=i+1; j<nums.size(); j++) {
                if((nums[i]+nums[j])==target) {
                    return {i,j};
                }
            }            
        }
        return {};
    }

int main() {
            vector<int>nums={3,2,4};
            int target=6;
            vector<long long int>result=twoSum(nums, target);
            for(long long int index : result) {
            cout << index << " ";
            }
    return 0;
}