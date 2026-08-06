#include <iostream>
using namespace std;
                    
int main() {
      int a=10;
      float pi=2.2;
      int *ptr=&a; 
      float *ptr2=&pi;  
      cout<<&a<<" = "<<ptr<<endl;
      cout<<*ptr<<endl;
      cout<<ptr<<endl;   
      cout<<&pi<<" = "<<ptr2<<endl;
      cout<<*ptr2<<endl;
      cout<<ptr2<<endl;   
      cout<<sizeof(ptr)<<endl;
      cout<<sizeof(ptr2)<<endl;
    return 0;
}