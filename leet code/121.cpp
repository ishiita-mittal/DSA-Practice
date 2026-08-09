#include <iostream>
#include<vector>
using namespace std;
        
  int maxProfit(vector<int>& prices) {
        int size=prices.size();
        int bestBuy[size];
        bestBuy[0]=INT32_MAX;
        for(int i=1; i<size; i++) {
            bestBuy[i]=min(bestBuy[i-1], prices[i-1]);
        }
        int maxProfit=0;
        for(int i=0; i<prices.size(); i++) {
            int profit=prices[i]-bestBuy[i];
            maxProfit=max(maxProfit, profit);
        }
        return maxProfit;
    }

int main() {
         vector<int>prices={7,1,5,3,6,4};
         maxProfit(prices);   
    return 0;
}