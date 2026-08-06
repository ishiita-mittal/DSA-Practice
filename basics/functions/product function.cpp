#include <iostream>
using namespace std;
               
          void prod(int a, int b) {
            int product=a*b;
            cout<<product<<endl;
          }

          void result() {
            prod(2,5);
            cout<<"printed";
          }

int main() {
            result();

    return 0;
}