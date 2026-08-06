#include <iostream>
using namespace std;

    int identity(int a, int b) {
        int val=((a*a) + (b*b) + (2*a*b));
        cout<<val;
        return val;
    }         

int main() {
            int a, b;
            cout<<"a, b: ";
            cin>>a>>b;
            identity(a,b);
    return 0;
}