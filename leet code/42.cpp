#include <iostream>
#include<vector>
using namespace std;

int trap(vector<int>& height) {
        int size=height.size();
        int leftMax[size], rightMax[size];
        leftMax[0]=height[0], rightMax[size-1]=height[size-1];
        for(int i=1; i<size; i++) {
            leftMax[i]=max(leftMax[i-1], height[i-1]);
        }
        for(int i=size-2; i>=1; i--) {
            rightMax[i]=max(rightMax[i+1], height[i+1]);
        }
        int trappedWater=0;
        for(int i=0; i<size; i++) {
            int currWater=min(leftMax[i], rightMax[i]) - height[i];
            if(currWater>0) {
                trappedWater+=currWater;
            }
        }
        return trappedWater;
    }
                    
int main() {
            vector<int>height{0,1,0,2,1,0,1,3,2,1,2,1};
            cout<<trap(height);
    return 0;
}