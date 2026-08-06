#include <iostream>
using namespace std;
        
     void changeA(int var) {
        var=10;
        cout<<"a of func: "<<var<<endl;
     }

int main() {
           int a=20;
           changeA(a);
           cout<<"a of main: "<<a<<endl; 
    return 0;
}