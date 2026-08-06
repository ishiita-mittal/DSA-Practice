#include <iostream>
using namespace std;
                    
int main() {
          int num;
          cout<<"Enter num: ";
          cin>>num;
          if(num==0) {
            cout<<num<<" is zero"<<endl;
          }
          else if(num<0) {
            cout<<num<<" is negative"<<endl;
          }  
          else {
            cout<<num<<" is positive";
          }
    return 0;
}