class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
            return 0;

        unordered_set<int> set(nums.begin(), nums.end());

        int sol = 0;
        for (int item: nums)
        {
            if(set.find(item - 1) == set.end())
            {
                int len = 1;
                while(set.find(item + len) != set.end())
                    len++;
                sol = max(sol, len);
            }
        }
        
        return sol;
    }
};
