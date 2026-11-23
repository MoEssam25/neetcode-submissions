class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window;
        int l = 0;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(i > k)
            {
                window.erase(nums[l]);
                l++;
            }

            if(window.count(nums[i]))
                return true;

            window.insert(nums[i]);
        }
        
        return false;
    }
};