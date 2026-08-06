#include <iostream>
using namespace std;

void changeA(int *ptr) {
    *ptr=10;
    cout<<*ptr<<endl;
}

void changeA(int &a) {
    a=25;
    cout<<a<<endl;
}
                    
int main() {
           int a=10;
           changeA(a);
           cout<<a<<endl; 
    return 0;
}