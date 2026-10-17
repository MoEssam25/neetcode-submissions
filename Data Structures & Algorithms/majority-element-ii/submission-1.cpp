class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        int size = nums.size();
        vector<int> sol;

        for (int num : nums) {
            map[num]++;
        }

        for(auto& pair : map)
        {
            if(pair.second > size/3)
                sol.push_back(pair.first);
        }

        return sol;
    }
};