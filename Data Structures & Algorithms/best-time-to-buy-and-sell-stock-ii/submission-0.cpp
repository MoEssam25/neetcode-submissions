class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sol = 0;
        int i = 0;
        int j = 1;
        int size = prices.size();

        if(size == 0 || size == 1)
            return sol;

        while(j < size)
        {
            if(prices[i] < prices[j])
            {
                int temp = prices[j++]; // 5
                while(j < size && prices[j] > temp)
                {
                    temp = prices[j];
                    j++;
                }
                sol += temp - prices[i];
                i = j;
            }
            else
            {
                i = j;
            }
            j++;
        }

        return sol;
    }
};