#include <iostream>
using namespace std;
     
   void sumofdig(int n) {
    int lastdig, sum=0;
    for(int i=n; i>=1; i/=10) {
        lastdig=i%10;
        sum+=lastdig;
    }
    cout<<sum;
   }

int main() {
            int n;
            cout<<"Enter n: ";
            cin>>n;
            sumofdig(n);
    return 0;
}