#include <iostream>
using namespace std;
           
     void maxProfit(int *prices, int size) {
     int bestBuy[size];
     bestBuy[0]=INT32_MAX;
     cout<<"Best sell price are: ";
     for(int i=1; i<size; i++) {
     bestBuy[i]=min(bestBuy[i-1], prices[i-1]);
     cout<<bestBuy[i]<<", ";
         }
         cout<<endl;
         cout<<"Profits are: ";
         int maxProfit=0;
         for(int i=0; i<size; i++) {
         int profit=prices[i]-bestBuy[i];
         cout<<profit<<" , ";
         maxProfit=max(maxProfit, profit);
     }
             cout<<endl;
             cout<<"Max profit: "<<maxProfit<<endl;
 }

int main() {
         int prices[]={7,1,5,3,6,4};
         int size=sizeof(prices)/sizeof(int);   
         maxProfit(prices, size);
    return 0;
}