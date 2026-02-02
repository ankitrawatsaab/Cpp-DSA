#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 👉 Best Time to Buy and Sell Stock
// (LeetCode Problem 121)

int maxProfit(vector<int>& prices) {
    int maximumProfit = 0;
    int bestBuy = prices[0];

    for(int i = 1; i < prices.size(); i++){
        maximumProfit = max(maximumProfit, prices[i] - bestBuy);
        bestBuy = min(bestBuy, prices[i]);
    }
    return maximumProfit;
}

int main() {
    vector<int> prices = {7,1,5,3,6,4};
    cout << "maximum profit is " << maxProfit(prices);
    return 0;
}
