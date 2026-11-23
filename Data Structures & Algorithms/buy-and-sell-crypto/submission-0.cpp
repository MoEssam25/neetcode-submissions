class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_value = 0;
        int buy = 0;

        for(int i = 1; i < prices.size(); i++)
        {
            if(prices[i] > prices[buy])
                max_value = std::max(max_value, prices[i] - prices[buy]);
            else
                buy = i;
        }
        
        return max_value;
    }
};