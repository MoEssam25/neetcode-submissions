class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> store_results;

        vector<vector<int>> freq(nums.size() + 1);

        for(int i = 0 ; i < nums.size() ; ++i)
            store_results[nums[i]]++;

        for(auto& entry : store_results)
            freq[entry.second].push_back(entry.first);

        vector<int> res;
        for (int i = freq.size() - 1; i > 0; --i) {
            for (int n : freq[i]) {
                res.push_back(n);
                if (res.size() == k) {
                    return res;
                }
            }
        }
        return res;
    }
};
