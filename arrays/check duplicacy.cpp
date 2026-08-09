#include <iostream>
#include <algorithm>
using namespace std;

bool containsDuplicate(int nums[], int size) {
    sort(nums, nums + size);
    for(int i = 1; i < size; i++) {
        if(nums[i-1] == nums[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    int nums[] = {2, 14, 18, 22, 22};
    int size = 5;
    cout << containsDuplicate(nums, size);
    return 0;
}