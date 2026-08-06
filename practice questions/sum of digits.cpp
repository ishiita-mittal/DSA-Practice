#include <iostream>
using namespace std;

int sum(int n) {
    int sum=0, curr, num=n;
       while(num>0) {
        curr=num%10;
        sum+=curr;
        num/=10;
       }     
       return sum;
}
                    
int main() {
       int n=121;    
       cout<<sum(n);
    return 0;
}