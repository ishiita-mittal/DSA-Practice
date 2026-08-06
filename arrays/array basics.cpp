#include <iostream>
using namespace std;
                    
int main() {
      int marks[5]={0};
      cout<<marks[0]<<endl;
       cout<<marks[1]<<endl;
      int marks1[7]={1,2,3,4,5};   
      cout<<marks1[2]<<endl;
      cout<<marks1[6]; 
      cout<<sizeof(marks);
      cout<<"length: "<<sizeof(marks)/sizeof(marks[0]);  
    return 0;
}