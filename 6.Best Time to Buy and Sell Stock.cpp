#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int buyingPrice = prices[0];
    int profit = 0;
    for(int i = 0; i < prices.size(); i++){
        if(prices[i] < buyingPrice){
            buyingPrice = prices[i];
        }else{
            profit = max(profit, prices[i]-buyingPrice);
        }
    }
    return profit;
}