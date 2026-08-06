#include <iostream>
using namespace std;
                    
int main() {
      int principle, simple_interest;
      float rate, time;
      cout<<"Enter principle, rate and time(hrs): ";
      cin>>principle>>rate>>time;
      simple_interest=(principle*rate*time)/100;
      cout<<"Your interest: "<<simple_interest;      
    return 0;
}