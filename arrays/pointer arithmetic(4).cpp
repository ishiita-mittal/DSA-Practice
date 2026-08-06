#include <iostream>
using namespace std;
                    
int main()
 {
      int arr[20]={1,2,3,4,5};
      int *ptr=arr;
      int *ptr2=ptr+2;
      cout<<(ptr==arr)<<endl;
      cout<<(ptr2<ptr)<<endl;  

    return 0;
 }