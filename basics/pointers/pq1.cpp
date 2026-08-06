#include <iostream>
using namespace std;
                    
int main() {
        int a=10, b=20;
        int *ptr1=&a, *ptr2=&b;
        ptr2=ptr1;
        cout<<&a<<endl;
        cout<<ptr1<<endl;
        cout<<ptr2<<endl;    
    return 0;
}