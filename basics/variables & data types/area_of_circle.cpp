#include <iostream>
#define PI 3.14
using namespace std;
                    
int main() {
         int area;
         float radius;
         cout<<"Enter radius: ";
         cin>>radius;
         area=PI*radius*radius;
         cout<<area;
    return 0;
}