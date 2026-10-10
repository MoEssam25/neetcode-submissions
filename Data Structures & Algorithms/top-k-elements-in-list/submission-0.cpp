class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> store_results;

        for(int i = 0 ; i < nums.size() ; ++i)
            store_results[nums[i]]++;

        set<pair<int,int>> s;
        for(auto& [num, count] : store_results)
            s.insert({count, num});

        vector<int> res;

        auto it = s.rbegin();

        for(int i = 0; i < k && it != s.rend(); it++, i++)
            res.push_back(it->second);

        return res;
    }
};
