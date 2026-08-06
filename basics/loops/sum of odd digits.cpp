#include <iostream>
using namespace std;
                    
int main() {
      int n=12345, sum=0;
      for(int i=n; i>0; i/=10) {
        int lastdig=i%10;
        if(i%2!=0) {
            sum+=lastdig;
        }
      }    
      cout<<sum;  
    return 0;
}