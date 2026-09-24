class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mP=0,curP=0,bestBuy = prices[0];
       for(int i=0;i<prices.size();i++){
            if(prices[i]>bestBuy){
                curP = prices[i] - bestBuy;
                mP = max(mP,curP);
            }
            bestBuy = min(bestBuy,prices[i]);
       } 
       return mP;
    }
};
