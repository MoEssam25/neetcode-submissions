class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> store_results;

        for(int i = 0 ; i < nums.size() ; ++i)
            store_results[nums[i]]++;

        vector<pair<int,int>> res;

        for(auto& [num, count] : store_results)
            res.push_back({count, num});

        sort(res.begin(), res.end());

        vector<int> sol;

        auto it = res.rbegin();
        for(int i = 0; i < k && it != res.rend(); it++, i++)
            sol.push_back(it->second);

        return sol;
    }
};
