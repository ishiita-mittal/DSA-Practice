#include <iostream>
using namespace std;
                    
int main() {
      int n=12345; int sum=0; int res;
      for(int i=n; i>0; i/=10) {
        int lastdig=i%10;
        sum=sum*10+lastdig;
        res=sum;
      }      
      cout<<res;
    return 0;
}