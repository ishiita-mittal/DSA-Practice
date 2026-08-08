#include <iostream>
using namespace std;
                
int trap(int *height, int size) {
    int leftMax[size], rightMax[size];
    cout<<"Left max values: ";
    leftMax[0]=height[0];
    for(int i=1; i<size; i++) {
        leftMax[i]=max(leftMax[i-1], height[i-1]);
        cout<<leftMax[i]<<", ";
    }
    cout<<endl;
    cout<<"Right max values: ";
    rightMax[size-1]=height[size-1];
    for(int i=size-2; i>=0; i--) {
        rightMax[i]=max(rightMax[i+1], height[i+1]);
        cout<<rightMax[i]<<" , ";
    }
    cout<<endl;
    int waterTrapped=0;
    for(int i=0; i<size; i++) {
        int water=min(leftMax[i], rightMax[i]) -height[i];
        if(water>0) {
            waterTrapped+=water;
        }
    }
    cout<<"Water trapped: ";
    return waterTrapped;
}

int main() {
        int height[]={4,2,0,6,3,2,5}; 
        int size=sizeof(height)/sizeof(int);   
        cout<<trap(height, size);
    return 0;
}