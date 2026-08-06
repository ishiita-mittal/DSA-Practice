#include <iostream>
using namespace std;

int main() {

    int n = 27;
    int* ptr = &n;

    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Before Increment: " << ptr << endl;
  
    ptr++;
    cout << "After Increment: " << ptr << endl;
    cout << "Before Decrement: " << ptr << endl;

    ptr--;
    cout << "After Decrement: " << ptr;
    return 0;
}