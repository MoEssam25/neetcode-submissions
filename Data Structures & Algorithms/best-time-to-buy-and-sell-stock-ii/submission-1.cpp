class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sol = 0;
        int size = prices.size();

        if(size == 0 || size == 1)
            return sol;

        for(int i = 1; i < size; ++i)
        {
            if(prices[i] > prices[i - 1])
                sol += (prices[i] - prices[i - 1]);
        }

        return sol;
    }
};