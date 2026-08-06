#include <iostream>
using namespace std;

       void btod(int bnum) {
        int pow=1, dnum=0;
        for(int i=bnum; i>0; i/=10) {
            int lastdig=i%10;
            dnum+= lastdig*pow;
            pow=pow*2;
        }
        cout<<dnum;
       }

                    
int main() {
         btod(101);   
    return 0;
}