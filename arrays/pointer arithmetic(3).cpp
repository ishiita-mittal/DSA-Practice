#include <iostream>
using namespace std;
                    
int main() {
    int arr[20]={1,2,3,4,5,6,7};
    int *ptr1=arr;
    int *ptr2=ptr1+4;
    cout<<*ptr2<<endl<<*ptr1<<endl;
    cout<<ptr2-ptr1;        
    return 0;
}