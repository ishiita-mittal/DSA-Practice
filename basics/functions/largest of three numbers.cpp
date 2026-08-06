#include <iostream>
using namespace std;
    
     int largest(int a, int b, int c) {
        if(a>=b && a>=c) {
            return a;
        } else if(b>=c) {
            return b;
        } else {
            return c;
        }
     }

int main() {
            int a, b, c;
            cout<<"enter a, b and c: ";
            cin>>a>>b>>c;
            int result=largest(a,b,c);
            cout<<result;
    return 0;
}