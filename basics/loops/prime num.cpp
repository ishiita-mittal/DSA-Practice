#include <iostream>
using namespace std;
                    
int main() {
          int n=71; bool isPrime=true;
          for(int i=2; i<=n-1; i++) {
            if(n%i==0) {
                isPrime=false;
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