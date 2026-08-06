#include <iostream>
using namespace std;
           
       bool primenum(int n) {
        if(n==1) {
            return false;
        }
        for(int i=2; i*i<=n; i++) {
            if(n%i==0) {
                return false;
            }
        }
        return true;
       }

int main() {
        int n;
        cout<<"Enter a number: ";
        cin>>n;
        
        cout<<primenum(n)<<endl;
    return 0;
}