#include <iostream>
using namespace std;
                    
int main() {
      float pen, pencil, eraser, bill, total_cost;
      cout<<"Enter cost(pen, pencil, eraser): ";
      cin>>pen>>pencil>>eraser;
      total_cost=pen+pencil+eraser;
      bill=total_cost+(total_cost*0.18);
      cout<<"total cost is: "<<total_cost<<endl;
      cout<<"Bill is: "<<bill;
    return 0;
}