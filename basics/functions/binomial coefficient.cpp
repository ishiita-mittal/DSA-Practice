#include <iostream>
using namespace std;
                 
       int factorial(int num, int fact=1) {
        for(int i=1; i<=num; i++) {
            fact*=i;
        }
        return fact;
       }

       int bico(int n, int r) {
        int v1=factorial(n);
        int v2=factorial(r);
        int v3=factorial(n-r);

        int result = ((v1)/(v2*v3));

        return result;
       }

int main() {
            int n,r;
            cout<<"Enter n, c and r: ";
            cin>>n>>r;

            cout<<"Binomial coefficient is: "<<bico(n,r);
    return 0;
}