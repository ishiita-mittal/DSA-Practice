#include <iostream>
using namespace std;
                    
int main() {
        int n=12345;
        while(n>0) {
            int lastdig=n%10;
            cout<<lastdig;
            n=n/10;
        }    
    return 0;
}