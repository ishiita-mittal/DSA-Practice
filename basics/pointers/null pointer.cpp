#include <iostream>
using namespace std;
                    
int main() {
       int *ptr=NULL; //initializing a nullptr
       cout<<ptr<<endl; //add of nullptr is 0
       cout<<*ptr;   //cannot dereference a nullptr
       int *ptr1=0;
       cout<<*ptr1; //it is equal to nullptr
    return 0;
}