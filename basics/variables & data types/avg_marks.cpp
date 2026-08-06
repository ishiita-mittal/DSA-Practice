#include <iostream>
using namespace std;
                    
int main() {
      int eng, maths, sci, avg;
      cout<<"Enter marks(eng, maths, sci):";
      cin>>eng>>maths>>sci;
      avg=(eng+maths+sci)/3;
      cout<<"Avg is: :"<<avg;      
    return 0;
}