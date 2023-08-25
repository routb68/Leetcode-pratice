class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int sell1 = 0, sell2 = 0, buy1 = INT_MIN, buy2 = INT_MIN;
		for (int i = 0; i < prices.size(); i++) {
			buy1 = max(buy1, -prices[i]);
			sell1 = max(sell1, buy1 + prices[i]);
			buy2 = max(buy2, sell1 - prices[i]);
			sell2 = max(sell2, buy2 + prices[i]);
		}
		return sell2;
    }
};