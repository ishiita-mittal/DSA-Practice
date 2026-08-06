#include <iostream>
using namespace std;
                int sum(int a, int b) {
                    int sum=a+b;
                    return sum;
                }    

                int diff(int a, int b) {
                    int diff=a-b;
                    return diff;
                }    
int main() {
          int s=sum(2,3);
          int d=diff(3,2);
          cout<<s<<endl;
          cout<<d;  
    return 0;
}