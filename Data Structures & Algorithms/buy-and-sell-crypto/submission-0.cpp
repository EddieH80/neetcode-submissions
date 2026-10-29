class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int maxProfit = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (maxProfit < prices[i] - prices[buy]) {
                maxProfit = prices[i] - prices[buy];
            }
            if (prices[i] < prices[buy]) {
                buy = i;
            }
        }
        return maxProfit;
    }
};
