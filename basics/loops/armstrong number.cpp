#include <iostream>
using namespace std;
                    
int main() {
           int n=371, cubesum=0;
           for(int num=n; num>0; num/=10) {
            int dig=num%10;
            cubesum+=dig*dig*dig;
           } 
           if(n==cubesum) {
            cout<<"armstrong"<<endl;
           } else {
            cout<<"not armstrong";
           }
    return 0;
}