#include <iostream>
using namespace std;

void printArr(int *arrptr, int n) {
    for(int i=0; i<n; i++) {
        cout<<*(arrptr+i)<<endl;
    }
}
                    
int main() {
      int arr[]={1,2,3,4,5};
      int n=5;
      printArr(arr, n);   
    return 0;
}