class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        int size = nums.size();
        vector<int> sol;

        for(int& i : nums)
        {
            map[i]++;
            if(map[i] > size/3 && std::find(sol.begin(), sol.end(), i) == sol.end())
                sol.push_back(i);
        }

        return sol;
    }
};