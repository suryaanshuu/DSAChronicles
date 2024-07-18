class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int price;
        int profit;
        int maxProfit;

        if(prices.size() == 1){
            return 0;
        }

        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < minPrice){
                minPrice = prices[i];
            }
            else{
                profit = prices[i] - minPrice;
                maxProfit = max(maxProfit, profit);
            }
        }
        return maxProfit;
    }
};