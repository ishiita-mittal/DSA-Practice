#include <iostream>
using namespace std;
                    
int main() {
      int n;
      cout<<"Enter n: ";
      cin>>n;
      int marks[n];
      int size=sizeof(marks)/sizeof(int);
      for(int i=0; i<size; i++) {
        cin>>marks[i];
        cout<<marks[i]<<" ";
      }      
      cout<<endl;
      cout<<(marks[3]=8);
      cout<<marks[3];
    return 0;
}