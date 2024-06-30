class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int totalProfit = 0;
        int profit;
        for(int i=1; i<prices.size(); i++){
            if(prices[i]>prices[i-1]){
                profit = prices[i]-prices[i-1];
                totalProfit += profit;
            }
            
        }
        return totalProfit;
        
    }
};