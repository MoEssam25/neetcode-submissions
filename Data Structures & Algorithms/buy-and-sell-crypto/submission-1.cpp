class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_value = 1000000000;
        int best = 0;

        for(int& p : prices)
        {
            min_value = std::min(min_value, p);
            best = std::max(best, p - min_value);
        }
        
        return best;
    }
};