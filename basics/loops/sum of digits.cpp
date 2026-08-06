#include <iostream>
using namespace std;
                    
int main() {
        int n=10829, lastdig, sum=0;
        for(int i=n; i>0; i/=10) {
            lastdig=i%10;
            sum+=lastdig;
        }    
        cout<<sum;
    return 0;
}