class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        for(int j = 0; j < nums.size() ; j++){
            
            if (j > 0 && nums[j] == nums[j - 1]) continue;

            for(int i = j + 1; i < nums.size() ; i++){
                if(i > j + 1 && nums[i] == nums[i - 1]) continue;

                int l = i + 1;
                int r = nums.size() - 1;

                while(l < r)
                {
                    long long sum = (long long) nums[i] + nums[j] + nums[l] + nums[r];

                    if(sum > target)
                        r--;
                    else if(sum < target)
                        l++;
                    else
                    {
                        res.push_back({nums[j], nums[i], nums[l], nums[r]});
                        r--;
                        l++;

                        while(l < r && nums[l] == nums[l-1]) l++;
                        while(l < r && nums[r] == nums[r+1]) r--;
                    }
                }
            }
        }

        return res;
    }
};