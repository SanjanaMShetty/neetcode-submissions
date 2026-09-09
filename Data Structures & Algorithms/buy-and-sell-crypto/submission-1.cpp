class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int MaxProfit=0,bestbuy=prices[0];
       for(int i=0;i<prices.size();i++){
        if(prices[i]>bestbuy){
            MaxProfit = max(MaxProfit,prices[i]-bestbuy);
        }
        bestbuy = min(bestbuy,prices[i]);
       } 
       return MaxProfit;
    }
};
