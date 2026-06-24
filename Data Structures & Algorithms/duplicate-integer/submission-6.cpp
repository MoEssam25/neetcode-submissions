class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> pa;

        for(int i = 0 ; i < nums.size() ; ++i)
        {
            if(pa[nums[i]])
                return true;
            pa[nums[i]]++;
        }
        
        return false;
    }
};