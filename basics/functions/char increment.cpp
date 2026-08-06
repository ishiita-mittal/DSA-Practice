#include <iostream>
using namespace std;

       void increment(char ch) {
        if(ch=='z') {
            cout<<"a";
        } else {
            ch++;
        cout<<ch;
       }
    }
                    
int main() {
          char ch;
          cout<<"enter: ";
          cin>>ch;
          increment(ch);  
    return 0;
}