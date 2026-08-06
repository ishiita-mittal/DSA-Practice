#include <iostream>
using namespace std;

void dtob(int dnum) {
        int pow=1, bnum=0;
        for(int i=dnum; i>0; i/=2) {
            int rem=i%2;
            bnum+= rem*pow;
            pow=pow*10;
        }
        cout<<bnum;
       }
                    
int main() {
            dtob(5);
    return 0;
}