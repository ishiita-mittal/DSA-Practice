#include <iostream>
using namespace std;
      
      int revnum(int num) {
        int res, sum=0;
        for(int i=num; i>0; i/=10) {
            int lastdig=i%10;
            sum=sum*10+lastdig;
            res=sum;
        }
        return res;
      }

      bool ispalindrome(int n) {
        if(revnum(n)) {
            return true;
        }
        return false;
      }

int main() {
            int n;
            cin>>n;
            int result=ispalindrome(n);
            cout<<result;
    return 0;
}