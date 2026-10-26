class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = 1;
        int size = nums.size();

        while(i < size && j < size)
        {
            if(nums[i] != nums[j])
                swap(nums[++i], nums[j]);
            j++;
        }

        return i + 1;
    }
};