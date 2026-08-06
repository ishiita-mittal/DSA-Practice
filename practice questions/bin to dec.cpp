#include <iostream>
#include<cmath>
#include<string>
using namespace std;
                    
int main() {
     string s="10010";
     int n=s.size();
     int dec=0, p=0;
     for(int i=n-1; i>=0; i--) {
        dec=dec+(s[i]-'0')*pow(2, p);
        p++;
     }      
     cout<<dec; 
    return 0;
}