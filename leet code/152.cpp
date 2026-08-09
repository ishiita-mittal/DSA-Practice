#include <iostream>
#include<vector>
using namespace std;

int maxProduct(vector<int>& nums) {
        if (nums.empty()) return 0;

        long long maxSoFar = nums[0];
        long long minSoFar = nums[0];
        long long result = maxSoFar;

        for (long long int i = 1; i < nums.size(); i++) {
            long long curr = nums[i];
            
            if (curr < 0) {
                swap(maxSoFar, minSoFar);
            }

            maxSoFar = max(curr, maxSoFar * curr);
            minSoFar = min(curr, minSoFar * curr);
            result = max(result, maxSoFar);
        }

        return result;
    }

int main() {
            vector<int>nums={0,1};
            cout<<maxProduct(nums);
    return 0;
}