#include <iostream>
#include<cmath>
using namespace std;
                    
int main() {
           int n=19; bool isPrime=true;
           for(int i=2; i<=sqrt(n); i++) {
            if(n%i==0) {
                isPrime=false;
                break;
            }
           } 
           if(isPrime) {
            cout<<n<<" is prime"<<endl;
           }
           else {
            cout<<n<<" not prime";
           }
    return 0;
}