class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> sol;

        for(int i = 0 ; i < nums.size() ; ++i)
        {
            if(sol.count(target-nums[i]))
                return {sol[target-nums[i]], i };
            sol[nums[i]] = i;
        }

        return {0,0};
    }
};
