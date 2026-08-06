#include <iostream>
using namespace std;

int fibonacci(int n) {
      int fib2, fib0=0, fib1=1;
          cout<<fib0<<","<<fib1;
          for(int i=2; i<=n; i++) {
                fib2=fib0+fib1;
                fib0=fib1;
                fib1=fib2;
                cout<<","<<fib2;
          }
      return fib2;
}
                    
int main() {
          int n=6; 
          fibonacci(n);
          
    return 0;
}