class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0; 
        int i = 0;
        for (int j = 1; j < prices.size();j++) {
            if (prices[i] < prices[j]) {
                int profit = prices[j] - prices[i];
                maxP = max(maxP, profit);
            }
            else{
                i=j;
            
            }

        }
        return maxP;
    }
};
