class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        for(int i = 1; i<nums.size(); ++i)
        {
            int curr = nums[i];
            int j = i - 1;
            while(j >= 0 && curr < nums[j])
            {
                nums[j + 1] = nums[j];
                j--;
            }
            nums[j + 1] = curr;
        }

    }
};