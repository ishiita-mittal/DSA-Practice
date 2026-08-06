#include <iostream>
using namespace std;
                    
int main() {
     int n;
     cout<<"Enter a num: ";
     cin>>n;
     for(int i=1; i<=10; i++) { 
     cout<<n<<" * "<<i<<" = "<<i*n<<endl;     
     }
    return 0;
}