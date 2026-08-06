#include <iostream>
using namespace std;
   
     int revnum(int x) {
        long long sum=0;
        for(int i=x; i>0; i/=10) {
            int lastdig=i%10;
            sum=sum*10+lastdig;
        }
        return sum;
     }
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(revnum(x)==x) {
            return true;
        }
        return false;
    }

int main() {
          int num=121;
          cout<<isPalindrome(num);  
    return 0;
}