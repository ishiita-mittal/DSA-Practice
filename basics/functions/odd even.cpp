#include <iostream>
using namespace std;

       bool oddeven(int n) {
        if(n%2==0) {
            return true;
        } else {
            return false;
        }
       }

int main() {
        cout<<oddeven(15);    
    return 0;
}